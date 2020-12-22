#pragma once
#include "Shape.h"
class Circle : public Shape {
public:
	using Shape::Shape;
public:
	void Draw() override;
private:
	double m_r;
};

