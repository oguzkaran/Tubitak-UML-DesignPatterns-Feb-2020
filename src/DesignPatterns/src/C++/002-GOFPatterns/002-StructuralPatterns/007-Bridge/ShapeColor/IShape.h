#pragma once

struct IShape {
	virtual void Draw() = 0;
	virtual ~IShape() = default;	
};

