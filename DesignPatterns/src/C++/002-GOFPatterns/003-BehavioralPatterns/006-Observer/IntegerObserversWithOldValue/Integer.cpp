#include "Integer.h"
#include "IntegerObserver.h"

void Integer::SetVal(int val)
{
	if (val == m_val)
		return;

	int oldVal = m_val;

	m_val = val;
	
	notify(oldVal);
}


void Integer::AttachObserver(IntegerObserver &observer)
{	
	m_observers.push_back(&observer);
}

void Integer::PopObserver()
{
	if (m_observers.empty())
		return;

	m_observers.pop_back();
}

void Integer::notify(int oldVal)
{
	for (auto observer : m_observers)
		observer->Update(oldVal);
}


