#include "Employee.h"

class Company
{
private:
	vector<Employee> list_Employee;
	int m_Employee;
public:
	void input();
	void output();
	long sum_salary();
	void find_employee();
};
