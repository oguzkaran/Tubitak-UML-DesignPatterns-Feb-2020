#pragma once
#include "Shape.h"

class Triangle : public Shape {
public:
	using Shape::Shape;
public:
	void Draw() override;
//...
};

