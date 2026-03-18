#include <iostream>
#include <fstream>
#include "PayrollManager.h"
#include "Employee.h"


void PayrollManager::addEmployee()
{
	std::string empid, name, salary;
	std::cout << "Enter Employee ID: " << endl;
	std::cin >> empid;
	std::cout << "Enter Name of the Employee: " << endl;
	std::cin >> name;
	std::cout << "Enter Salary of the Employee: " << endl;
	std::cin >> salary;
	Employee emp(empid, name, salary);
	std::ofstream out("EmployeesPayroll.txt", ios::app);
	out << emp;
	out.close();
	std::cout << "Employee " << empid << "has been stored succesfully" << endl;
}

void PayrollManager::displayEmployee()
{
	std::cout << "EmpId\tName\tSalary" << endl;
	Employee e;
	std::ifstream in("EmployeesPayroll.txt");
	while (in)
	{
		in >> e;
		std::cout << e.mEmpId << "\t" << e.mName << "\t" << e.mSalary << endl;
	}

	in.close();
}

void PayrollManager::generatePaySlip()
{
	int month;;
	string id;
	std::cout << "Enter the month (in digits) : " << endl;
	std::cin >> month;
	std::cout << "Enter EmpId to generate Pay Slip : " << endl;
	std::cin >> id;

	Employee e;
	std::ifstream in("EmployeesPayroll.txt");
	while (in)
	{
		in >> e;
		if (id == e.mEmpId)
		{
			int noofdays;
			std::cout << "Enter Number of Present Days : ";
			std::cin >> noofdays;

			double salary = stod(e.mSalary);
			int totalDays;

			switch (month)
			{
				case 2:
					totalDays = 28;
					break;
				case 4:
					totalDays = 30;
					break;
				case 6:
					totalDays = 30;
					break;
				case 9:
					totalDays = 30;
					break;
				case 11:
					totalDays = 30;
					break;
				default:
					totalDays = 31;
			}

			CalculateAmount(salary, noofdays, totalDays);
		}
	}
	in.close();
}

void PayrollManager::CalculateAmount(double& salary, int& present, int& totalDays)
{
	if (present > totalDays)
	{
		std::cout << "The Present days cannot be greater than the totalDays in the current month!" << endl;
		return;
	}

	double perday = salary / totalDays;
	double amount = perday * present;
	std::cout << "Payable amount is " << amount << endl;
}


