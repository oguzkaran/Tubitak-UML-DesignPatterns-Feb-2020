#include <iostream>
#include "BitmapImageProxy.h"

using namespace std;

#if 1
int main()
{
	BitmapImageProxy bp{ "manzara.bmp" };

	bp.Show();

	bp.SetUrl("datca.bmp");

	bp.Show();

	return 0;
}

#endif
