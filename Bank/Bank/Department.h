#pragma once

#include <vector>

#include "StringType.h"
#include "Employee.h"

class Department
{
public:
	enum BranchType {
		Info,
		FrontOffice,
		BackOffice
	};
public:
	Department(String id, BranchType name, std::vector<Employee> employees)
		: m_Id(id), m_Name(name), m_EmployeeCount(sizeof(employees)), m_Employees(employees)
	{};
private:
	String m_Id;
	BranchType m_Name;
	int m_EmployeeCount;
	std::vector<Employee> m_Employees;
};
