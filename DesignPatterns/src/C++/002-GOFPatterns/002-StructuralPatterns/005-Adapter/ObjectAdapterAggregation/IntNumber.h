#pragma once

#include <iostream>

class IntNumber {
	friend std::ostream &operator <<(std::ostream &os, const IntNumber &n);	
public:
	IntNumber(int val = 0) : m_val{ val } {}
	int GetVal() const { return m_val; }
private:
	int m_val;
};

