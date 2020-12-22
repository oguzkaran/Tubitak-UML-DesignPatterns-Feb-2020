#include "ShapeGroup.h"

#include <iostream>
#include <algorithm>


using namespace std;

void ShapeGroup::Draw()
{
	cout << "ShapeGroup::Draw()" << endl;

	std::for_each(m_shapes.begin(), m_shapes.end(), [](auto s) {s->Draw();});
}

void ShapeGroup::AddShape(Shape *shape)
{
	m_shapes.push_back(shape);
}