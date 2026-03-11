#pragma once
#include <fstream>
using namespace std;

class PayrollSystem
{
	public:
		void InitializeUI();

};

class Employee
{
	public:
		string mEmpId;
		string mName;
		string mSalary;

		Employee(string empid = "", string name = "", string salary = "") : mEmpId(empid), mName(name), mSalary(salary)
		{

		}

		bool operator==(const Employee& obj)
		{
			return (mEmpId == obj.mEmpId) && (mName == obj.mName) && (mSalary == obj.mSalary);
		}

		friend ostream& operator<<(ostream& out, const Employee& obj)
		{
			out << obj.mEmpId << " " << obj.mName << " " << obj.mSalary << std::endl;
		}


		//void addEmployee();
		//void displayEmployee();
		//void generatePaySlip();
};

class EmployeeData
{
public:
	void addEmployee()
	{
		string empid, name, salary;
		std::cout << "Enter Employee ID: " << endl;
		std::cin >> empid;
		std::cout << "Enter Name of the Employee: " << endl;
		std::cin >> name;
		std::cout << "Enter Salary of the Employee: " << endl;
		std::cin >> salary;
		Employee emp(empid, name, salary);
		std::ofstream out("Employee.txt");
		out << emp;
		out.close();
	}
};