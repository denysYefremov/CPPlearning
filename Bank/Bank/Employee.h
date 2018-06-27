#pragma once

#include "StringType.h"

class Employee
{
public:
	enum Positions
	{
		Operator,
		SeniorOperator,
		JuniorManager,
		Manager,
		SeniorManager,
		BranchChief
	};
	enum Sex {
		Male,
		Female
	};
public:
	Employee(String id = NULL, String name = NULL, int age = NULL, Sex sex = Male, int salary = NULL, Positions position = Operator)
		: m_Id(id), m_Name(name), m_Age(age), m_Sex(sex), m_Salary(salary), m_Position(position)
	{};
private:
	String m_Id;
	String m_Name;
	int m_Age;
	Sex m_Sex;
	int m_Salary;
	Positions m_Position;
};
