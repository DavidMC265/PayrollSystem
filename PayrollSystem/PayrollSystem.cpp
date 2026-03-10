#include <iostream>
#include "PayrollSystem.h"


void PayrollSystem::InitializeUI()
{
	int ch;
	Employee emp;

	do
	{
		std::cout << "--------------------XYZ Company Payroll System--------------------" << std::endl;
		std::cout << "1. Add Employee" << endl;
		std::cout << "2. Display Employee" << endl;
		std::cout << "3. Generate Pay Slip" << endl;
		std::cout << "4. Ext" << endl;
		std::cout << "Enter your choice" << endl;

		std::cin >> ch;

		switch (ch)
		{
			case 1: std::cout << "Option 1 entered" << endl;
				break;
			default:std::cout << "No valid option" << endl;
		}

	} while (ch != 4);
}

int main()
{
    PayrollSystem system;
    system.InitializeUI();
}
