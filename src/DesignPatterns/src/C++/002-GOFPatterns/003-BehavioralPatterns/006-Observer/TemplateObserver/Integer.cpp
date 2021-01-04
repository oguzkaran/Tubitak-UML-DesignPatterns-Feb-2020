#include "Integer.h"
#include "Observer.h"

void Integer::SetVal(int val)
{
	if (val == m_val)
		return;

	m_val = val;
	notify();
}
void Integer::AttachObserver(Observer<Integer>  &observer)
{
	m_observers.push_back(&observer);
}

void Integer::PopObserver()
{
	if (m_observers.empty())
		return;

	m_observers.pop_back();
}

void Integer::notify()
{
	for (auto observer : m_observers)
		observer->Update();
}


