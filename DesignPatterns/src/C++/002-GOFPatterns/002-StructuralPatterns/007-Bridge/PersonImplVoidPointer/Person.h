#pragma once

#include <string>

class Person {
public:
	Person(const char *name, int no);
	Person(const std::string &name, int no);
	//...
	~Person();
	std::string GetName() const;
	int GetNo() const;
private:	
	void *m_impl;
};
