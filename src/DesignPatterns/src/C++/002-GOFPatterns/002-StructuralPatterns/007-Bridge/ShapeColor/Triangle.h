#pragma once
#include "Shape.h"

class Triangle : public Shape {
public:
	using Shape::Shape;
	void Draw() override;
};

