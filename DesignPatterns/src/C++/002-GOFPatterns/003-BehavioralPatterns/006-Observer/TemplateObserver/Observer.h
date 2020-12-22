#pragma once

template <typename T>
class Observer {
public:	
	explicit Observer(T *t) : m_t{ t } {}
	virtual void Update() = 0;
	virtual ~Observer() = default;
protected:
	T *m_t;
};
