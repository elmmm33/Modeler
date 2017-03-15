#include "modelerview.h"
#include "modelerapp.h"
#include "modelerdraw.h"
#include <FL/gl.h>
#include <cmath>
#include "modelerglobals.h"
#include <vector>
#include "bitmap.h"
#include <FL/fl_ask.h>
#include "modelerui.h"
//#include "LSystem.h"
#include "CartonModel.h"
using namespace std;

//extern vector<LSystem*>*CartonSystems;
//extern void Carton_LSystemSetup();
//extern void CartonIK();
extern void CartonControls(ModelerControl* controls);

#define CARTON_MAIN_COLOR 	0.69f, 0.88f, 0.9f
#define CARTON_CONNECT_COLOR 0.88f, 1.0f, 1.0f
#define CARTON_LOWER_COLOR 0.53f, 0.81f, 0.92f
#define CARTON_EYE_COLOR 0.0f 0.0f 0.0f
#define CARTON_MOUTH_COLOR 1.0f 0.941f 0.961f

// using funciton to create a new model (such as head, arm)
ModelerView* createCartonModel(int x, int y, int w, int h, char *modelname)
{
	return new CartonModel(x, y, w, h, modelname);
}

void CartonModel::draw()
{

	ModelerView::draw();

	// draw the floor
	setAmbientColor(0.1f, 0.1f, 0.1f);
	setDiffuseColor(1.0f, 1.0f, 1.0f);
	glPushMatrix();
	{
		glTranslated(-5, 0, -5);
		drawBox(10, 0.01f, 10);
	}
	glPopMatrix();

	//CartonDrawLSystems();

	// starting  draw the model
	setAmbientColor(0.1f, 0.1f, 0.1f);
	setDiffuseColor(CARTON_MAIN_COLOR);
	glPushMatrix(); // start
	{
		glTranslated(VAL(XPOS), VAL(YPOS), VAL(ZPOS));
		double detailLevel = VAL(DETAIL_LEVEL);
		
		//float arm_rotate_limit = VAL(ARM_ROTATE_LIMIT);
		//float leg_rotate_limit = VAL(LEG_ROTATE_LIMIT);
		
		// init parameters

		// head para
		double headWidth = VAL(HEAD_WIDTH);
		double headHeight = VAL(HEAD_HEIGHT);
		double headDepth = VAL(HEAD_DEPTH);
		double headRotateX = VAL(HEAD_ROTATE_X);
		double headRotateY = VAL(HEAD_ROTATE_Y);
		double headRotateZ = VAL(HEAD_ROTATE_Z);

		//body para
		double bodyWidth = VAL(BODY_WIDTH);
		double bodyHeight = VAL(BODY_HEIGHT);
		double bodyDepth = VAL(BODY_DEPTH);
		double bodyRotateX = VAL(BODY_ROTATE_X);
		double bodyRotateY = VAL(BODY_ROTATE_Y);
		double bodyRotateZ = VAL(BODY_ROTATE_Z);

		//arm para
		double upperArmWidth = VAL(UPPER_ARM_WIDTH);
		double upperArmHeight = VAL(UPPER_ARM_HEIGHT);
		double upperArmDepth = VAL(UPPER_ARM_DEPTH);
		double leftUpperArmX = VAL(LEFT_UPPER_ARM_ROTATE_X);
		double leftUpperArmY = VAL(LEFT_UPPER_ARM_ROTATE_Y);
		double leftUpperArmZ = VAL(LEFT_UPPER_ARM_ROTATE_Z);
		double rightUpperArmX = VAL(RIGHT_UPPER_ARM_ROTATE_X);
		double rightUpperArmY = VAL(RIGHT_UPPER_ARM_ROTATE_Y);
		double rightUpperArmZ = VAL(RIGHT_UPPER_ARM_ROTATE_Z);

		double lowerArmWidth = VAL(LOWER_ARM_WIDTH);
		double lowerArmHeight = VAL(LOWER_ARM_HEIGHT);
		double lowerArmDepth = VAL(LOWER_ARM_DEPTH);
		double leftlowerArmX = VAL(LEFT_LOWER_ARM_ROTATE_X);
		double leftlowerArmY = VAL(LEFT_LOWER_ARM_ROTATE_Y);
		double leftlowerArmZ = VAL(LEFT_LOWER_ARM_ROTATE_Z);
		double rightlowerArmX = VAL(RIGHT_LOWER_ARM_ROTATE_X);
		double rightlowerArmY = VAL(RIGHT_LOWER_ARM_ROTATE_Y);
		double rightlowerArmZ = VAL(RIGHT_LOWER_ARM_ROTATE_Z);
		
		// leg para
		double upperLegWidth = VAL(UPPER_LEG_WIDTH);
		double upperLegHeight = VAL(UPPER_LEG_HEIGHT);
		double upperLegDepth = VAL(UPPER_LEG_DEPTH);
		double leftUpperLegX = VAL(LEFT_UPPER_LEG_ROTATE_X);
		double leftUpperLegY = VAL(LEFT_UPPER_LEG_ROTATE_Y);
		double leftUpperLegZ = VAL(LEFT_UPPER_LEG_ROTATE_Z);
		double rightUpperLegX = VAL(RIGHT_UPPER_LEG_ROTATE_X);
		double rightUpperLegY = VAL(RIGHT_UPPER_LEG_ROTATE_Y);
		double rightUpperLegZ = VAL(RIGHT_UPPER_LEG_ROTATE_Z);

		double lowerLegWidth = VAL(LOWER_LEG_WIDTH);
		double lowerLegHeight = VAL(LOWER_LEG_HEIGHT);
		double lowerLegDepth = VAL(LOWER_LEG_HEIGHT);
		double leftLowerLegX = VAL(LEFT_LOWER_LEG_ROTATE_X);
		double leftLowerLegY = VAL(LEFT_LOWER_LEG_ROTATE_Y);
		double leftLowerLegZ = VAL(LEFT_LOWER_LEG_ROTATE_Z);
		double rightLowerLegX = VAL(RIGHT_LOWER_LEG_ROTATE_X);
		double rightLowerLegY = VAL(RIGHT_LOWER_LEG_ROTATE_Y);
		double rightLowerLegZ = VAL(RIGHT_LOWER_LEG_ROTATE_Z);





		// Draw model
		glPushMatrix(); // draw body
		if (detailLevel > 0)
		{
			glRotated(bodyRotateX, 1, 0, 0);
			glRotated(bodyRotateY, 0, 1, 0);
			glRotated(bodyRotateZ, 0, 0, 1);

			glPushMatrix(); 	// draw head
			if(detailLevel >1 )
			{
				glTranslated(-1.5, 4, 0); //need to change 
				glTranslated(headWidth / 2, 0, headDepth / 2);
				glRotated(headRotateX, 1, 0, 0);
				glRotated(headRotateY, 0, 1, 0);
				glRotated(headRotateZ, 0, 0, 1);
				glTranslated(-headWidth / 2, 0, -headDepth / 2);
				drawBox(headWidth, headHeight, headDepth);
			};
			glPopMatrix(); // end head

			glTranslated(-1.5+(headWidth-bodyWidth)/2, 2.2, (headDepth-bodyDepth)/2);
			drawBox(bodyWidth, bodyHeight, bodyDepth);
		}
		glPopMatrix(); // end body


		
	}
	glPopMatrix(); // end


	// metaballs( not complete)


	// Animation support ( not complete)

	// LIghts (not complete)

}


int main()
{
	//Carton_LSystemSetup();

	ModelerControl controls[NUMCONTROLS];
	CartonControls(controls);

	//controls[DETAIL_LEVEL] = ModelerControl("Level of detail", 0, 5, 1, 5);

	ModelerApplication::Instance()->Init(&createCartonModel, controls, NUMCONTROLS);
	return ModelerApplication::Instance()->Run();

}
