#include "Person.h"
#include <string>

using namespace std;

struct PersonImpl {
	std::string m_name;
	int m_no;	
};

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
	PersonImpl *pimpl{ static_cast<PersonImpl *>(m_impl) };

	pimpl->m_name = name;
	pimpl->m_no = no;
}

Person::Person(const std::string &name, int no) : Person{ name.data(), no }
{}

Person::~Person()
{
	delete static_cast<PersonImpl*>(m_impl);
}

std::string Person::GetName() const 
{
	return getName(static_cast<PersonImpl*>(m_impl));
}
int Person::GetNo() const 
{ 
	return getNo(static_cast<PersonImpl*>(m_impl));
}