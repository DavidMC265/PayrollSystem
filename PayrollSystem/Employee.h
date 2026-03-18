#pragma once
#include <iostream>
#include <string>
using namespace std;

class Employee
{
	public:
		string mEmpId;
		string mName;
		string mSalary;

	public:
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
			return out;
		}

		friend istream& operator >>(istream& in, Employee& obj)
		{
			in >> obj.mEmpId;
			in >> obj.mName;
			in >> obj.mSalary;

			return in;
		}
};