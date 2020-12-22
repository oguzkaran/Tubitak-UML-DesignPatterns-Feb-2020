#pragma once

#include <string>
#include <cstddef>

class Widget {
public:
	Widget(size_t width = 0, size_t height = 0) : m_width{ width }, m_height{ height } {}
public:
	size_t GetWidth()  const { return m_width; }
	size_t GetHeight()  const { return m_height; }
	//...
protected:
	size_t m_width;
	size_t m_height;
};
