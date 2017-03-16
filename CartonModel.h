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
	char* textureFileName = NULL;
	virtual void draw();
	void setTextureFile(char* path) { this->textureFileName = path;}
	void drawTexture(double drawWidth, double drawHeight, double drawDepth);
};

#endif
