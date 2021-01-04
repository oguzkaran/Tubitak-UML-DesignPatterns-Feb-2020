#pragma once

#include "Integer.h"

class IntegerObserver {
public:
	explicit IntegerObserver(Integer *pi) : m_pi{ pi } {}
	virtual void Update() = 0;
	virtual ~IntegerObserver() = default;
protected:
	Integer *m_pi;	
};

