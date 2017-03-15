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

	controls[HEAD_ROTATE_X] = ModelerControl("Head rotation X", -30, 30, 0.01f, 0);
	controls[HEAD_ROTATE_Y] = ModelerControl("Head rotation Y", -60, 60, 0.01f, 0);
	controls[HEAD_ROTATE_Z] = ModelerControl("Head rotation Z", -30, 30, 0.01f, 0);

	controls[BODY_ROTATE_X] = ModelerControl("body rotation X", -30, 30, 0.01f, 0);
	controls[BODY_ROTATE_Y] = ModelerControl("body rotation Y", -60, 60, 0.01f, 0);
	controls[BODY_ROTATE_Z] = ModelerControl("body ratation Z", -30, 30, 0.01f, 0);

	controls[HEAD_WIDTH] = ModelerControl("Head width", 0.0, 4.0, 0.01f, 3.4);
	controls[HEAD_HEIGHT] = ModelerControl("Head height", 0.0, 4.0, 0.01f, 2.0);
	controls[HEAD_DEPTH] = ModelerControl("Head depth", 0.0, 4.0, 0.01f, 3.0);

	controls[BODY_WIDTH] = ModelerControl("Body width", 0.0, 2.0, 0.01f, 1.8);
	controls[BODY_HEIGHT] = ModelerControl("Body height", 0.0, 2.0, 0.01f, 1.8);
	controls[BODY_DEPTH] = ModelerControl("Body depth", 0.0, 2.0, 0.01f, 1.5);

	controls[UPPER_ARM_WIDTH] = ModelerControl("upper arm width", 0.0, 2.0, 0.01f, 1.0);
	controls[UPPER_ARM_HEIGHT] = ModelerControl("upper arm height", 0.0, 3.0, 0.01f, 1.5);
	controls[UPPER_ARM_DEPTH] = ModelerControl("upper arm depth", 0.0, 2.0, 0.01f, 1.0);

	controls[LOWER_ARM_WIDTH] = ModelerControl("lower arm width", 0.0, 2.0, 0.01f, 1.0);
	controls[LOWER_ARM_HEIGHT] = ModelerControl("lower arm height", 0.0, 3.0, 0.01f, 0.5);
	controls[LOWER_ARM_DEPTH] = ModelerControl("lower arm depth", 0.0, 2.0, 0.01f, 1.0);

	controls[UPPER_LEG_WIDTH] = ModelerControl("upper  leg width", 0.0, 1.5, 0.01f, 0.9);
	controls[UPPER_LEG_HEIGHT] = ModelerControl("upper leg height", 0.0, 1.5, 0.01f, 0.7);
	controls[UPPER_LEG_DEPTH] = ModelerControl("upper leg depth", 0.0, 1.5, 0.01f, 0.8);

	controls[LOWER_LEG_WIDTH] = ModelerControl("lower  leg width", 0.0, 1.5, 0.01f, 1.0);
	controls[LOWER_LEG_HEIGHT] = ModelerControl("lower leg height", 0.0, 1.5, 0.01f, 0.3);
	controls[LOWER_LEG_DEPTH] = ModelerControl("lower leg depth", 0.0, 1.5, 0.01f, 0.8);



	controls[DETAIL_LEVEL] = ModelerControl("Level of detail", 0, 5, 1, 5);
}