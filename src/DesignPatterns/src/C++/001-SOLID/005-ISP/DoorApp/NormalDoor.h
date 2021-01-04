#pragma once
#include "IDoor.hpp"

class NormalDoor : public IDoor {
public:
	NormalDoor(bool isOpen = false) : m_isOpen{ isOpen }
	{}
public:
	void Open() override;
	void Close() override;
	bool IsOpen() override;
	void SetOpen(bool isOpen);	
	//...
private:
	bool m_isOpen;
};

