#pragma once

#include <map>
#include <memory>
#include "Shape.h"

enum ShapeType { RECTANGLE, CIRCLE, TRIANGLE };

class ShapeFacade {
public:
	ShapeFacade();
	void DrawCircle();
	void DrawRectangle();
	void DrawTriangle();
private:
	enum ShapeType { RECTANGLE, CIRCLE, TRIANGLE };
	std::map<ShapeType, std::unique_ptr<Shape>> m_shapes;
};

