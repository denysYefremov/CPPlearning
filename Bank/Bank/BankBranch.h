#pragma once

#include <vector>

#include "StringType.h"
#include "Department.h"

class BankBranch
{
public:
	BankBranch(String id, String adress, String branchChiefName, std::vector<Department> departments)
		: m_Id(id), m_Adress(adress), m_NameOfTheBranchChief(branchChiefName), m_Departments(departments)
	{};
private:
	String m_Id;
	String m_Adress;
	String m_NameOfTheBranchChief;
	std::vector<Department> m_Departments;
};
