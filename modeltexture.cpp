#include "CartonModel.h"
#include <FL/gl.h>
#include "modelerapp.h"
#include "modelerglobals.h"
#include "modelerui.h"

/*
void CartonModel::draw(int drawWidth)
{
	auto pui = ModelerApplication::Instance()->GetPUI();
	static int width = 0;
	static int height = 0;

	if (image == NULL || pui->hasNew)
	{
		pui->hasNew = false;

		// try to open the image to read
		unsigned char*	imagedata;

		if (pui->FileName == nullptr ||
			(imagedata = readBMP(pui->FileName, width, height)) == NULL)
		{
			fl_alert("Can't load bitmap file");
			SETVAL(DRAW_, 0);
			return;
		}

		image = imagedata;
		glClearColor(0.0, 0.0, 0.0, 0.0);
		glShadeModel(GL_FLAT);
		glEnable(GL_DEPTH_TEST);

		glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

		glGens(1, &texName);
		glBind(GL__2D, texName);

		glTexParameteri(GL__2D, GL__WRAP_S, GL_REPEAT);
		glTexParameteri(GL__2D, GL__WRAP_T, GL_REPEAT);
		glTexParameteri(GL__2D, GL__MAG_FILTER, GL_NEAREST);
		glTexParameteri(GL__2D, GL__MIN_FILTER, GL_NEAREST);
		glTexImage2D(GL__2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, image);
	}

	//glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	if (drawWidth <= 0) drawWidth = width;
	if (width > 0 && height > 0)
	{
		double hwfactor = height / (double)width;
		glEnable(GL__2D);
		glTexEnvf(GL__ENV, GL__ENV_MODE, GL_DECAL);
		glBind(GL__2D, texName);
		glBegin(GL_QUADS);
		glTexCoord2f(0.0, 0.0); glVertex3f(0.0, 0.0, 0.0);
		glTexCoord2f(0.0, 1.0); glVertex3f(0.0, drawWidth * hwfactor, 0.0);
		glTexCoord2f(1.0, 1.0); glVertex3f(drawWidth, drawWidth * hwfactor, 0.0);
		glTexCoord2f(1.0, 0.0); glVertex3f(drawWidth, 0.0, 0.0);
		glEnd();
		glFlush();
		glDisable(GL__2D);
	}
}

*/