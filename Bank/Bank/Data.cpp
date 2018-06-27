#include <vector>

#include "BankBranch.h"

struct Data
{
public:
	void init() {
		std::vector<Employee> decabristov_info_employee{
			Employee("info_0", "Anton", 29, Employee::Male, 2700, Employee::SeniorOperator),
			Employee("info_1", "Anna", 21, Employee::Female, 1200, Employee::Operator),
			Employee("info_2", "Ivan", 19, Employee::Male, 700, Employee::Operator),
			Employee("info_3", "Masha", 23, Employee::Female, 1100, Employee::Operator)
		};

		std::vector<Employee> decabristov_frontOffice_employee{
			Employee("frontOffice_0", "Ilona", 38, Employee::Female, 10000, Employee::BranchChief),
			Employee("frontOffice_1", "Aduard", 27, Employee::Male, 2700, Employee::Manager),
			Employee("frontOffice_2", "Anna", 23, Employee::Female, 1200, Employee::Manager),
		};

		std::vector<Department> decabristov_department{
			Department("decabristov_info_department", Department::Info, decabristov_info_employee),
			Department("decabristov_frontOffice_department", Department::FrontOffice, decabristov_frontOffice_employee),
		};

		BankBranch* decabristov = new BankBranch("decabristov", "decabristov 12b", "Ilona", decabristov_department);

		// --------------------------------------------------------------------------------------------------------------

		std::vector<Employee> kulika_frontOffice_employee{
			Employee("frontOffice_3", "Vasilii", 39, Employee::Male, 12000, Employee::BranchChief),
			Employee("frontOffice_4", "Petr", 24, Employee::Male, 2700, Employee::SeniorManager),
			Employee("frontOffice_5", "Irina", 27, Employee::Female, 1200, Employee::Manager),
		};

		std::vector<Department> kulika_department{
			Department("kulika_frontOffice_department", Department::FrontOffice, kulika_frontOffice_employee),
		};

		BankBranch* kulika = new BankBranch("kulika", "Ilushi kulika 23/2", "Vasilii", decabristov_department);

		// --------------------------------------------------------------------------------------------------------------

		std::vector<Employee> komkova_info_employee{
			Employee("info_4", "Pavel", 25, Employee::Male, 4500, Employee::SeniorOperator),
			Employee("info_5", "Viktoriya", 22, Employee::Female, 700, Employee::Operator),
			Employee("info_6", "Kim", 23, Employee::Male, 1100, Employee::Operator)
		};

		std::vector<Employee> komkova_backOffice_employee{
			Employee("backOffice_0", "Lera", 27, Employee::Female, 26000, Employee::BranchChief),
		};

		std::vector<Department> komkova_department{
			Department("decabristov_info_department", Department::Info, komkova_info_employee),
			Department("decabristov_frontOffice_department", Department::BackOffice, komkova_backOffice_employee),
		};

		BankBranch* komkova = new BankBranch("komkova", "komkova 94", "Ilona", decabristov_department);
	}
};
