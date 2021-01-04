#pragma once

#include <string>
#include <memory>

class Person final {
public:
    struct PersonImpl;
private:
    std::unique_ptr<PersonImpl> m_impl;
public:
	explicit Person(const char *name);
	explicit Person(const std::string &name);
	//...
	~Person() = default;

	[[nodiscard]] std::string GetName() const;
};
