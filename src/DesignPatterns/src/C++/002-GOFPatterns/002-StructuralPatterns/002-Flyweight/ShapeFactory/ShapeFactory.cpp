#include "ShapeFactory.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

using namespace std;

std::shared_ptr<Shape> ShapeFactory::GetShape(ShapeType st)
{
	if (st < RECTANGLE || st > TRIANGLE)
		throw invalid_argument("invalid shape type");

	if (m_shapes.find(st) == m_shapes.end()) {
		switch (st) {
		case RECTANGLE:
			m_shapes.insert(make_pair(st, make_shared<Rectangle>()));
			break;
		case CIRCLE:
			m_shapes.insert(make_pair(st, make_shared<Circle>()));
			break;
		case TRIANGLE:
			m_shapes.insert(make_pair(st, make_shared<Triangle>()));
			break;
		}
	}
	
	return m_shapes[st];
}


