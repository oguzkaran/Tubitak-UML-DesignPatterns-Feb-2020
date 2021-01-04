#include <iostream>
#include "ShapeFactory.h"
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

using namespace std;

#if 1
int main()
{
	ShapeFactory sf;

	shared_ptr<Shape> c{ sf.GetShape(CIRCLE) };
	shared_ptr<Shape> r{ sf.GetShape(RECTANGLE) };
	shared_ptr<Shape> r2{ sf.GetShape(RECTANGLE) };
	shared_ptr<Shape> t{ sf.GetShape(TRIANGLE) };

	t->Draw();
	c->Draw();
	r->Draw();
	
	return 0;
}

#endif
