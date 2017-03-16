#ifndef _CTMODEL_H
#define _CTMODEL_H

#include <FL/gl.h>
#include "modelerview.h"

class CartonModel : public ModelerView
{
public:
	CartonModel(int x, int y, int w, int h, char *label)
		: ModelerView(x, y, w, h, label) { }
	GLuint texName;
	unsigned char * image = NULL;
	virtual void draw();
	void draw(int drawWidth);
};

#endif // _KUMAMODEL_H#pragma once
