#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
#include "RedColor.h"
#include "GreenColor.h"

using namespace std;

#if 1
int main()
{
	RedColor rc;
	GreenColor gc;
	Rectangle r1{ rc };

	r1.Draw();	

	Rectangle r2{ gc };

	r2.Draw();

	Triangle t1{ rc };

	t1.Draw();

	Triangle t2{ gc };

	t2.Draw();

	return 0;
}

#endif
