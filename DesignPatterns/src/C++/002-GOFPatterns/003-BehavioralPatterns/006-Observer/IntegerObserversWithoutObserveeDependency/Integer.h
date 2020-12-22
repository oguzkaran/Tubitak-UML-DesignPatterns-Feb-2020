#pragma once

#include <vector>
#include <memory>

class IntegerObserver;

class Integer { //Observee
public:
	Integer(int val = 0) : m_val{ val } {}
	int GetVal() const { return m_val; }
	void SetVal(int val);	
	void AttachObserver(IntegerObserver &observer);
	void PopObserver();
private:
	void notify();
private:
	int m_val;
	std::vector <IntegerObserver *> m_observers; //Dikkat nesnenin kopyası çıkartılırken dikkat edilmeli
};

