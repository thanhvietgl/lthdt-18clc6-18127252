#include "Header.h"

class Employee
{
protected:
	string m_name;
	int m_year;
	long m_basicSalary;
public:
	Employee();
	Employee(string name);
	Employee(string name, int year);
	Employee(string name, int year, long salary);
	Employee(const Employee &a);

	void input();
	void output();
	long salary();
	string Name();

};
