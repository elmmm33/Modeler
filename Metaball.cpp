#include "Metaball.h"
#include "CUBE_GRID.h"
#include "VECTOR3D.h"
#include "CartonModel.h"
#include <FL/gl.h>
#include <vector>

using namespace std;

void drawMetaball(int numMetaballs, const vector< vector<float> >& balls)
{
	const int minGridSize = 10;
	int gridSize = 30;
	float threshold = 1.0f;
	CUBE_GRID cubeGrid;

	METABALL* metaballs = new METABALL[numMetaballs];
	for (int i = 0; i<numMetaballs; i++)
		metaballs[i].Init(VECTOR3D(balls[i][0], balls[i][1], balls[i][2]), balls[i][3] * balls[i][3]);

	//init marching cube
	cubeGrid.CreateMemory();
	cubeGrid.Init(gridSize);

	for (int i = 0; i<cubeGrid.numVertices; i++)
	{
		cubeGrid.vertices[i].value = 0.0f;
		cubeGrid.vertices[i].normal.LoadZero();
	}
	VECTOR3D ballToPoint;
	float squaredRadius;
	VECTOR3D ballPosition;
	float normalScale;
	for (int i = 0; i<numMetaballs; i++)
	{
		squaredRadius = metaballs[i].squaredRadius;
		ballPosition = metaballs[i].position;


		for (int j = 0; j<cubeGrid.numVertices; j++)
		{

			ballToPoint.x = cubeGrid.vertices[j].position.x - ballPosition.x;
			ballToPoint.y = cubeGrid.vertices[j].position.y - ballPosition.y;
			ballToPoint.z = cubeGrid.vertices[j].position.z - ballPosition.z;


			float squaredDistance = ballToPoint.x*ballToPoint.x +
				ballToPoint.y*ballToPoint.y +
				ballToPoint.z*ballToPoint.z;
			if (squaredDistance == 0.0f)
				squaredDistance = 0.0001f;


			cubeGrid.vertices[j].value += squaredRadius / squaredDistance;


			normalScale = squaredRadius / (squaredDistance*squaredDistance);
			cubeGrid.vertices[j].normal.x += ballToPoint.x*normalScale;
			cubeGrid.vertices[j].normal.y += ballToPoint.y*normalScale;
			cubeGrid.vertices[j].normal.z += ballToPoint.z*normalScale;
		}
	}

	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
	glEnable(GL_NORMALIZE);
	glEnable(GL_CULL_FACE);
	cubeGrid.DrawSurface(threshold);
	glDisable(GL_CULL_FACE);
	cubeGrid.FreeMemory();
	delete[] metaballs;
}