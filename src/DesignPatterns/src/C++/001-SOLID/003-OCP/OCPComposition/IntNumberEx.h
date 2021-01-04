#pragma once

#include "IntNumber.h"

class IntNumberEx {
public:
	IntNumberEx(int val = 0) : m_number{ val }
	{}
	short GetShortVal() const { return static_cast<short>(m_number.GetVal()); }
	int GetVal() const { return m_number.GetVal(); }
	void SetVal(int val);
	explicit operator int() const;	
	explicit operator short() const;
private:
	IntNumber m_number;
};

