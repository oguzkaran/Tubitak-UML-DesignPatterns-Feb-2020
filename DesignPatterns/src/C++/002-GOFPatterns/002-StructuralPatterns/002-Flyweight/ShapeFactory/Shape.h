#pragma once

struct Color {
	int r, g, b;	
};

class Shape {
public:
	Shape(int r = 255, int g = 255, int b = 255) : color{ r, g, b }
	{}
	virtual ~Shape() = default;
public:
	virtual void Draw() = 0;	
protected:
	//...
	Color color;
};