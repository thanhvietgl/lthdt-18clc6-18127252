#include "Employee.h"

Employee::Employee()
{
	m_name = "unknown";
	m_year = 2011;
	m_basicSalary = 800000;
}
Employee::Employee(string name)
{
	m_name =name;
	m_year = 2011;
	m_basicSalary = 800000;
}
Employee::Employee(string name, int year)
{
	m_name = name;
	m_year = year;
	m_basicSalary = 800000;
}
Employee::Employee(string name, int year, long salary)
{
	m_name = name;
	m_year = year;
	m_basicSalary = salary;
}
Employee::Employee(const Employee& a)
{
	m_name = a.m_name;
	m_year = a.m_year;
	m_basicSalary = a.m_basicSalary;
}

void Employee::input()
{
	cin.ignore();
	cout << "\nInput name of employee: "; 
	getline(cin, m_name);
	
	cout << "\nInput year start of employee: "; cin >> m_year;
	cout << "\nInput basic salary of employee: "; cin >> m_basicSalary;
	
}
void Employee::output()
{
	cout << "\nName of employee: "<<m_name;
	cout << "\nYear start of employee: "<< m_year;
	cout << "\nBasic salary of employee: "<< m_basicSalary;
}
long Employee::salary()
{
	return m_basicSalary;
}
string Employee::Name()
{
	return m_name;
}