#pragma once
#include "IntNumber.h"

class IntNumberAdapter : private IntNumber {
	friend std::ostream &operator <<(std::ostream &os, const IntNumberAdapter &n);	
public:
	IntNumberAdapter(int valInt, int val = 0) 
		: IntNumber{ valInt }, m_val{ val } {}

	int GetVal() const { return m_val * IntNumber::GetVal(); }
	//...
private:
	int m_val;
};

