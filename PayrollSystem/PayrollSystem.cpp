#include "PayrollSystem.h"
#include "PayrollManager.h"


void PayrollSystem::InitializeUI()
{
	int ch;
	PayrollManager Manager;

	do
	{
		std::cout << "--------------------XYZ Company Payroll System--------------------" << std::endl;
		std::cout << "1. Add Employee" << endl;
		std::cout << "2. Display Employee" << endl;
		std::cout << "3. Get Payable Amount of employee" << endl;
		std::cout << "4. Generate Pay Slip" << endl;
		std::cout << "5. Ext" << endl;
		std::cout << "Enter your choice" << endl;

		std::cin >> ch;

		switch (ch)
		{
			case 1: Manager.addEmployee();
				break;
			case 2: Manager.displayEmployee();
				break;
			case 3: Manager.generatePaySlip();
				break;
			case 4: //Manager.createPaySlip();
				break;
			case 5: cout << "Terminating programm..." << endl;
				break;

			default:std::cout << "No valid option" << endl;
		}

	} while (ch != 5);
}

int main()
{
    PayrollSystem system;
    system.InitializeUI();
	return 0;
}
