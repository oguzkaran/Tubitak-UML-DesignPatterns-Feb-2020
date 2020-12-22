#pragma once
#include "Shape.h"

class Rectangle : public Shape {
public:
	using Shape::Shape;
	void Draw() override;
};

