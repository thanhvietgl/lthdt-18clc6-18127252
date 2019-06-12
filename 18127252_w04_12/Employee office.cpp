#include "Employee office.h"

Employee_office::Employee_office()
{
	m_workingDay = 0;
	m_allowance = 0;
}
Employee_office::Employee_office(int workingday)
{
	m_workingDay = workingday;
	m_allowance = 0;
}
Employee_office::Employee_office(int workingday, long allowance)
{
	m_workingDay = workingday;
	m_allowance = allowance;
}
Employee_office::Employee_office(const Employee_office& a):Employee(a)
{
	m_workingDay = a.m_workingDay;
	m_allowance = a.m_allowance;
}
Employee_office::Employee_office(string name, int year, long basicsalary, int workingday, long allowance):Employee(name,year,basicsalary)
{
	m_workingDay = workingday;
	m_allowance = allowance;
}

void Employee_office::input()
{
	Employee::input();
	cout << "\nInput the number of Day working: "; cin >> m_workingDay;
	cout << "\nInput Salary allowance: "; cin >> m_allowance;

}
void Employee_office::output()
{
	Employee::output();
	cout << "\nThe number of Day working: "<< m_workingDay;
	cout << "\nSalary allowance: "<< m_allowance;
}
long Employee_office::salary()
{
	return Employee::salary() + m_workingDay * 100000 + m_allowance;
}