#pragma once

class IntNumber final {
public:
	IntNumber(int val = 0) : m_val{ val }
	{}
	int GetVal() const { return m_val; }
	void SetVal(int val);
	explicit operator int() const { return m_val; }
	//...
private:
	int m_val;
};

