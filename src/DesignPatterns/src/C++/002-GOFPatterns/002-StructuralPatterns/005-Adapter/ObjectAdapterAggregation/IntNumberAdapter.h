#pragma once
#include "IntNumber.h"

class IntNumberAdapter {
	friend std::ostream &operator <<(std::ostream &os, const IntNumberAdapter &n);	
public:
	IntNumberAdapter(IntNumber *pn, int val = 0) 
		: m_number{ pn }, m_val{ val } {}

	int GetVal() const { return m_val * m_number->GetVal(); }
	//...
private:
	int m_val;
	IntNumber *m_number;
};

