#pragma once

class PayrollManager
{
	public:
		void addEmployee();

		void displayEmployee();

		void generatePaySlip();

		void CalculateAmount(double &salary, int &present, int &totalDays);
};