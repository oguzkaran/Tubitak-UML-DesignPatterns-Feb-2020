#include "Person.h"
#include <string>

struct PersonImpl {
	std::string m_name;
	int m_no;	
};

using namespace std;

static std::string getName(PersonImpl *p)
{
	return p->m_name;
}

static int getNo(PersonImpl *p)
{
	return p->m_no;
}

Person::Person(const char *name, int no) : m_impl{ new PersonImpl }
{
	m_impl->m_name = name;
	m_impl->m_no = no;
}

Person::Person(const std::string &name, int no) : Person{ name.data(), no }
{}

Person::~Person()
{
	delete m_impl;
}

std::string Person::GetName() const 
{
	return getName(m_impl);
}
int Person::GetNo() const 
{ 
	return getNo(m_impl);
}