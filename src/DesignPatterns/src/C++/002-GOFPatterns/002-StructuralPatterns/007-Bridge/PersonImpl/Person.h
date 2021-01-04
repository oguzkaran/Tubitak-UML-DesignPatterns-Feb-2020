#pragma once

#include <string>

class PersonImpl;

class Person {
public:
	Person(const char *name, int no);
	Person(const std::string &name, int no);
	//5 kardeşten diğerleri de yazılmalı
	~Person();
	std::string GetName() const;
	int GetNo() const;
private:	
	PersonImpl *m_impl;
};
