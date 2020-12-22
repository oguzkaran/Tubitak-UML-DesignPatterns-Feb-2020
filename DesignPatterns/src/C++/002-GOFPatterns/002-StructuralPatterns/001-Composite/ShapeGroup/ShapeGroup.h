#pragma once

#include <vector>

#include "Shape.h"

class ShapeGroup : public Shape {
public:
	void Draw() override;
	void AddShape(Shape *shape);
private:
	std::vector<Shape *> m_shapes;
};

