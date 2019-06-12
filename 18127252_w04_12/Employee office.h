
#include "Employee.h"


class Employee_office :public Employee
{
protected:
	int m_workingDay;
	long m_allowance;
public:
	Employee_office();
	Employee_office(int workingday);
	Employee_office(int workingday,long allowance);
	Employee_office(const Employee_office &a);
	Employee_office(string name, int year, long basicsalary, int workingday, long allowance);

	void input();
	void output();
	long salary();
};
