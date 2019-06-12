#include "Employee.h"

class Employee_produce :public Employee
{
protected:
	int int_product;
public:
	Employee_produce();
	Employee_produce(int product);
	Employee_produce(string name, int year, long salary,int roduct);
	Employee_produce(const Employee_produce& a);
	void input();
	void output();
	long salary();
};
