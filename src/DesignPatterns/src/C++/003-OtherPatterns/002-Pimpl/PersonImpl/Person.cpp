#include <string>
#include <memory>
#include "Person.h"

struct Person::PersonImpl {
	std::string m_name;
	int m_no{};
};

using PersonImpl = Person::PersonImpl;

using namespace std;

static std::string getName(PersonImpl *p)
{
	return p->m_name;
}

static int getNo(PersonImpl *p)
{
	return p->m_no;
}

Person::Person(const char *name) : m_impl{ make_unique<PersonImpl>() }
{
	m_impl->m_name = name;
}

Person::Person(const std::string &name) : Person{ name.data() }
{}

std::string Person::GetName() const 
{
	return getName(m_impl.get());
}
