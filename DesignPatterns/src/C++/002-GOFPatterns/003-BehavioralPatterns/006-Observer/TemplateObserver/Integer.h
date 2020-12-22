#pragma once

#include <vector>
#include <memory>
#include "Observer.h"


class Integer { //Observee
public:
	Integer(int val = 0) : m_val{ val } {}
	int GetVal() const { return m_val; }
	void SetVal(int val);	
	void AttachObserver(Observer<Integer> &observer);
	void PopObserver();
private:
	void notify();
private:
	int m_val;
	std::vector <Observer<Integer> *> m_observers; //Dikkat nesnenin kopyas? ç?kart?l?rken dikkat edilmeli
};

