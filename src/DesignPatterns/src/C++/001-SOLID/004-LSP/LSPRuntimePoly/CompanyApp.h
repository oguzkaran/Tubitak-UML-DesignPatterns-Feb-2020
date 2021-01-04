#pragma once

#include "Employee.hpp"
#include <vector>
#include <memory>

class CompanyApp {
public:	
	void Run();	
private:
	void displayMenu() const;
	void insertProc();
	void deleteProc();
	void updateProc();
	void listProc();
private:
	std::vector<std::unique_ptr<Employee>> m_employees;
};

