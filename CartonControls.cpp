#include "modelerglobals.h"
#include "modelerapp.h"
//#include "LSystem.h"
#include <vector>

//extern std::vector<LSystem*>* kumaLSystems;

void CartonControls(ModelerControl* controls)
{
	controls[XPOS] = ModelerControl("X Position", -5, 5, 0.1f, 0);
	controls[YPOS] = ModelerControl("Y Position", 0, 5, 0.1f, 0);
	controls[ZPOS] = ModelerControl("Z Position", -5, 5, 0.1f, 0);

	controls[DRAW_LIGHT] = ModelerControl("Draw lights", 0, 1, 1, 0);

	controls[LIGHT0_X] = ModelerControl("Light 0 X", -10, 10, 0.1f, 4);
	controls[LIGHT0_Y] = ModelerControl("Light 0 Y", -10, 10, 0.1f, 2);
	controls[LIGHT0_Z] = ModelerControl("Light 0 Z", -10, 10, 0.1f, -4);
	controls[LIGHT0_DIFFUSE] = ModelerControl("Light 0 Diffuse", 0, 5, 0.01f, 1);

	controls[LIGHT1_X] = ModelerControl("Light 1 X", -10, 10, 0.1f, -2);
	controls[LIGHT1_Y] = ModelerControl("Light 1 Y", -10, 10, 0.1f, 1);
	controls[LIGHT1_Z] = ModelerControl("Light 1 Z", -10, 10, 0.1f, 5);
	controls[LIGHT1_DIFFUSE] = ModelerControl("Light 1 Diffuse", 0, 5, 0.01f, 1);


	controls[HEAD_ROTATE_X] = ModelerControl("Head rotation X", -30, 30, 0.01f, 0);
	controls[HEAD_ROTATE_Y] = ModelerControl("Head rotation Y", -60, 60, 0.01f, 0);
	controls[HEAD_ROTATE_Z] = ModelerControl("Head rotation Z", -30, 30, 0.01f, 0);

	controls[BODY_ROTATE_X] = ModelerControl("body rotation X", -30, 50, 0.01f, 0);
	controls[BODY_ROTATE_Y] = ModelerControl("body rotation Y", -15, 15, 0.01f, 0);
	controls[BODY_ROTATE_Z] = ModelerControl("body ratation Z", -10, 10, 0.01f, 0);

	controls[LEFT_UPPER_ARM_ROTATE_X] = ModelerControl("Left arm rotation X", -90, 50, 0.01f, 0);
	controls[LEFT_UPPER_ARM_ROTATE_Y] = ModelerControl("Left arm rotation Y", -30, 30, 0.01f, 0);
	controls[LEFT_UPPER_ARM_ROTATE_Z] = ModelerControl("Left arm rotation Z", -90, 30, 0.01f, 0);

	controls[LEFT_LOWER_ARM_ROTATE_X] = ModelerControl("left hand rotation X", -90, 50, 0.01f, 0);
	controls[LEFT_LOWER_ARM_ROTATE_Y] = ModelerControl("left hand rotation Y", -30, 10, 0.01f, 0);
	controls[LEFT_LOWER_ARM_ROTATE_Z] = ModelerControl("left hand rotation Z", -90, 30, 0.01f, 0);

	controls[RIGHT_UPPER_ARM_ROTATE_X] = ModelerControl("right arm rotation X", -90, 50, 0.01f, 0);
	controls[RIGHT_UPPER_ARM_ROTATE_Y] = ModelerControl("right arm rotation Y", -30, 30, 0.01f, 0);
	controls[RIGHT_UPPER_ARM_ROTATE_Z] = ModelerControl("right arm rotation Z", -30, 90, 0.01f, 0);

	controls[RIGHT_LOWER_ARM_ROTATE_X] = ModelerControl("right hand rotation X", -90, 50, 0.01f, 0);
	controls[RIGHT_LOWER_ARM_ROTATE_Y] = ModelerControl("right hand rotation Y", -10, 30, 0.01f, 0);
	controls[RIGHT_LOWER_ARM_ROTATE_Z] = ModelerControl("right hand rotation Z", -30, 90, 0.01f, 0);

	controls[LEFT_UPPER_LEG_ROTATE_X] = ModelerControl("right leg rotation X", -90, 50, 0.01f, 0);
	controls[LEFT_UPPER_LEG_ROTATE_Y] = ModelerControl("right leg rotation Y", -30, 30, 0.01f, 0);
	controls[LEFT_UPPER_LEG_ROTATE_Z] = ModelerControl("right leg rotation Z", -30, 90, 0.01f, 0);

	controls[LEFT_LOWER_LEG_ROTATE_X]  = ModelerControl("right feet rotation X", -50, 50, 0.01f, 0);
	controls[LEFT_LOWER_LEG_ROTATE_Y] = ModelerControl("right feet rotation Y", -30, 30, 0.01f, 0);
	controls[LEFT_LOWER_LEG_ROTATE_Z] = ModelerControl("right feet rotation Z", -15, 30, 0.01f, 0);

	controls[RIGHT_UPPER_LEG_ROTATE_X] = ModelerControl("left leg rotation X", -90, 50, 0.01f, 0);
	controls[RIGHT_UPPER_LEG_ROTATE_Y] = ModelerControl("left leg rotation Y", -30, 30, 0.01f, 0);
	controls[RIGHT_UPPER_LEG_ROTATE_Z] = ModelerControl("left leg rotation Z", -90, 30, 0.01f, 0);

	controls[RIGHT_LOWER_LEG_ROTATE_X] = ModelerControl("left  feet rotation X", -50, 50, 0.01f, 0);
	controls[RIGHT_LOWER_LEG_ROTATE_Y] = ModelerControl("left feet rotation Y", -30, 30, 0.01f, 0);
	controls[RIGHT_LOWER_LEG_ROTATE_Z] = ModelerControl("left feet rotation Z", -30, 15, 0.01f, 0);

	controls[TEXTURE_MODE] = ModelerControl("texture mode", 0, 1, 1, 0);
	controls[TEXTURE_SIZE] = ModelerControl("Texture Size", 1, 10, 1, 3);
	controls[TEXTURE_X] = ModelerControl("Texture X", -10, 10, 0.01f, 0);
	controls[TEXTURE_Z] = ModelerControl("Texture Z", -10, 10, 0.01f, -3.0);

	controls[HEAD_WIDTH] = ModelerControl("Head width", 0.0, 4.0, 0.01f, 3.4);
	controls[HEAD_HEIGHT] = ModelerControl("Head height", 0.0, 4.0, 0.01f, 2.0);
	controls[HEAD_DEPTH] = ModelerControl("Head depth", 0.0, 4.0, 0.01f, 3.0);

	controls[BODY_WIDTH] = ModelerControl("Body width", 0.0, 2.0, 0.01f, 1.8);
	controls[BODY_HEIGHT] = ModelerControl("Body height", 0.0, 2.0, 0.01f, 1.8);
	controls[BODY_DEPTH] = ModelerControl("Body depth", 0.0, 2.0, 0.01f, 1.5);

	controls[UPPER_ARM_WIDTH] = ModelerControl("upper arm width", 0.0, 2.0, 0.01f, 0.65);
	controls[UPPER_ARM_HEIGHT] = ModelerControl("upper arm height", 0.0, 3.0, 0.01f, 1.5);
	controls[UPPER_ARM_DEPTH] = ModelerControl("upper arm depth", 0.0, 2.0, 0.01f, 1.0);

	controls[LOWER_ARM_WIDTH] = ModelerControl("lower arm width", 0.0, 2.0, 0.01f, 0.65);
	controls[LOWER_ARM_HEIGHT] = ModelerControl("lower arm height", 0.0, 3.0, 0.01f, 0.7);
	controls[LOWER_ARM_DEPTH] = ModelerControl("lower arm depth", 0.0, 2.0, 0.01f, 0.8);

	controls[UPPER_LEG_WIDTH] = ModelerControl("upper  leg width", 0.0, 1.5, 0.01f, 0.8);
	controls[UPPER_LEG_HEIGHT] = ModelerControl("upper leg height", 0.0, 3.0, 0.01f, 1.7);
	controls[UPPER_LEG_DEPTH] = ModelerControl("upper leg depth", 0.0, 1.5, 0.01f, 0.8);

	controls[LOWER_LEG_WIDTH] = ModelerControl("lower  leg width", 0.0, 1.5, 0.01f, 0.8);
	controls[LOWER_LEG_HEIGHT] = ModelerControl("lower leg height", 0.0, 1.5, 0.01f, 0.5);
	controls[LOWER_LEG_DEPTH] = ModelerControl("lower leg depth", 0.0, 1.5, 0.01f, 0.9);



	controls[EYE_SLIDE] = ModelerControl("eye size", 0.0, 1.5, 0.01f, 0.4);
	//controls[ARM_CONNECT_SLIDE] = ModelerControl("arm connect size", 0.0, 1.5, 0.01f, 0.6);


	controls[DETAIL_LEVEL] = ModelerControl("Level of detail", 0, 5, 1, 5);
}