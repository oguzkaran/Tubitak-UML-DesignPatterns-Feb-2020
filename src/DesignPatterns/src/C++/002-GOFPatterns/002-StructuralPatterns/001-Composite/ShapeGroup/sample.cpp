#include <iostream>
#include "Shape.h"
#include "ShapeGroup.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

using namespace std;

#if 1
int main()
{
    Circle c{ 123, 45, 56 };
	Rectangle r{ 34, 100, 0 };
	Triangle t{ 100, 255, 255 };

    //Grupland?r
    ShapeGroup sg;

	sg.AddShape(&c);
	sg.AddShape(&r);
	sg.AddShape(&t);

	sg.Draw();
	
	return 0;
}

#endif
