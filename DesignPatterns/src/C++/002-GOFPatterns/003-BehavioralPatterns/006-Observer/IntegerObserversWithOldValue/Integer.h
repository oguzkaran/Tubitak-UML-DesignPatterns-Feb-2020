#pragma once

#include <vector>
#include <memory>

class IntegerObserver;

class Integer { //Observee
private:
	int m_val;
	std::vector <IntegerObserver *> m_observers;
public:
	explicit Integer(int val = 0) : m_val{ val } {}
	[[nodiscard]]int GetVal() const { return m_val; }
	void SetVal(int val);	
	void AttachObserver(IntegerObserver &observer);
	void PopObserver();
private:
	void notify(int oldVal);
};

