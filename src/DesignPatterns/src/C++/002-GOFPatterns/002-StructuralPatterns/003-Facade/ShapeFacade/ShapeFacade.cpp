#include "ShapeFacade.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

#include <utility>

using namespace std;

ShapeFacade::ShapeFacade()
{
	m_shapes.insert(make_pair(CIRCLE, make_unique<Circle>()));
	m_shapes.insert(make_pair(RECTANGLE, make_unique<Rectangle>()));
	m_shapes.insert(make_pair(TRIANGLE, make_unique<Triangle>()));
}

void ShapeFacade::DrawCircle()
{
	return m_shapes[CIRCLE]->Draw();
}

void ShapeFacade::DrawRectangle()
{
	return m_shapes[RECTANGLE]->Draw();
}
void ShapeFacade::DrawTriangle()
{
	return m_shapes[TRIANGLE]->Draw();
}