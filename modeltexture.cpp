#include "CartonModel.h"
#include <FL/gl.h>
#include "modelerapp.h"
#include "modelerglobals.h"
#include "modelerui.h"
#include <math.h>

/*
void CartonModel::drawTexture(int x, int y, int z)
{
	auto pui = ModelerApplication::Instance()->GetPUI();
	static int width = 0;
	static int height = 0;

	if (image == NULL || pui->hasNewTexture)
	{
		pui->hasNewTexture = false;

		// try to open the image to read
		unsigned char*	imagedata;

		if (pui->textureFileName == nullptr ||
			(imagedata = readBMP(pui->textureFileName, width, height)) == NULL)
		{
			fl_alert("Can't load bitmap file");
			SETVAL(TEXTURE_MODE, 0);
			return;
		}

		}

		image = imagedata;
		glClearColor(0.0, 0.0, 0.0, 0.0);
		glShadeModel(GL_FLAT);
		glEnable(GL_DEPTH_TEST);


		glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

		glGenTextures(1, &texName);
		glBindTexture(GL_TEXTURE_2D, texName);

		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, image);
		//glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, checkImageWidth, checkImageHeight, 0, GL_RGB, GL_UNSIGNED_BYTE, checkImage);
	}

	//glMatrixMode(GL_MODELVIEW);
	int savemode;
	glGetIntegerv(GL_MATRIX_MODE, &savemode);

	glMatrixMode(GL_MODELVIEW);
	glEnable(GL_TEXTURE_2D);
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);

	glBindTexture(GL_TEXTURE_2D, texName);
	glPushMatrix();
	glScaled(x, y, z);
	
	glBegin(GL_QUADS);
	
	glNormal3d(0.0, 0.0, -1.0);
	glTexCoord2f(0.0, 0.0); glVertex3d(0.0, 0.0, 0.0);
	glTexCoord2f(0.0, 1.0); glVertex3d(0.0, 1.0, 0.0);
	glTexCoord2f(1.0, 1.0); glVertex3d(1.0, 1.0, 0.0);
	glTexCoord2f(1.0, 0.0); glVertex3d(1.0, 0.0, 0.0);
	
	glNormal3d(0.0, -1.0, 0.0);
	glTexCoord2f(0.0, 0.0); glVertex3d(0.0, 0.0, 0.0);
	glTexCoord2f(0.0, 1.0); glVertex3d(1.0, 0.0, 0.0);
	glTexCoord2f(1.0, 1.0); glVertex3d(1.0, 0.0, 1.0);
	glTexCoord2f(1.0, 0.0); glVertex3d(0.0, 0.0, 1.0);
	
	glNormal3d(-1.0, 0.0, 0.0);
	glTexCoord2f(0.0, 0.0); glVertex3d(0.0, 0.0, 0.0);
	glTexCoord2f(0.0, 1.0); glVertex3d(0.0, 0.0, 1.0);
	glTexCoord2f(1.0, 1.0); glVertex3d(0.0, 1.0, 1.0);
	glTexCoord2f(1.0, 0.0); glVertex3d(0.0, 1.0, 0.0);
	
	glNormal3d(0.0, 0.0, 1.0);
	glTexCoord2f(0.0, 0.0); glVertex3d(0.0, 0.0, 1.0);
	glTexCoord2f(0.0, 1.0); glVertex3d(1.0, 0.0, 1.0);
	glTexCoord2f(1.0, 1.0); glVertex3d(1.0, 1.0, 1.0);
	glTexCoord2f(1.0, 0.0); glVertex3d(0.0, 1.0, 1.0);
	
	glNormal3d(0.0, 1.0, 0.0);
	glTexCoord2f(0.0, 0.0); glVertex3d(0.0, 1.0, 0.0);
	glTexCoord2f(0.0, 1.0); glVertex3d(0.0, 1.0, 1.0);
	glTexCoord2f(1.0, 1.0); glVertex3d(1.0, 1.0, 1.0);
	glTexCoord2f(1.0, 0.0); glVertex3d(1.0, 1.0, 0.0);
	
	glNormal3d(1.0, 0.0, 0.0);
	glTexCoord2f(0.0, 0.0); glVertex3d(1.0, 0.0, 0.0);
	glTexCoord2f(0.0, 1.0); glVertex3d(1.0, 1.0, 0.0);
	glTexCoord2f(1.0, 1.0); glVertex3d(1.0, 1.0, 1.0);
	glTexCoord2f(1.0, 0.0); glVertex3d(1.0, 0.0, 1.0);
	
	glEnd();
	

	glPopMatrix();
	glFlush();
	glDisable(GL_TEXTURE_2D);
	glMatrixMode(savemode);


}
*/

