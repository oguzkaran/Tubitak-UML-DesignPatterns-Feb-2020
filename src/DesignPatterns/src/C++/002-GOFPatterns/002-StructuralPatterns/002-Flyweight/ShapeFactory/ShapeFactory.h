#pragma once

#include <map>
#include <memory>

#include "Shape.h"

enum ShapeType {RECTANGLE, CIRCLE, TRIANGLE};

class ShapeFactory {
public:
	std::shared_ptr<Shape> GetShape(ShapeType st);
private:
	std::map<ShapeType, std::shared_ptr<Shape>> m_shapes;
};

