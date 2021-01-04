#pragma once

#include "IShape.h"
#include "IColor.h"

class Shape : public IShape { //Bridge class
public:
	Shape(IColor &color) : pcolor(&color) {}
    virtual void Draw() = 0;
protected:
	IColor *pcolor;
};

