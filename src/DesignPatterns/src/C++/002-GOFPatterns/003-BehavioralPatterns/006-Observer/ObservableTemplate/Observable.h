#pragma once

#include <algorithm>
#include <string>
#include <vector>
#include "IObserver.h"

template <typename T>
struct Observable {
	void Notify(T &src, const std::string &name);
	void Attach(IObserver<T> &observer);
	void Detach(IObserver<T> &observer);
private:
	std::vector<IObserver<T> *> m_observers;
};

template <typename T>
void Observable<T>::Notify(T &src, const std::string &name) 
{
	std::for_each(m_observers.begin(), m_observers.end(), [&](auto o) {o->FieldChanged(src, name); });
}

template <typename T>
void Observable<T>::Attach(IObserver<T> &observer)
{
	m_observers.push_back(&observer);
}

template <typename T>
void Observable<T>::Detach(IObserver<T> &observer)
{
	m_observers.erase(std::remove(m_observers.begin(), m_observers.end(), &observer, m_observers.end()));
}