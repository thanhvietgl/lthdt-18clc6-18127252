#include "Employee_produce.h"

Employee_produce::Employee_produce()
{
	int_product = 0;
}
Employee_produce::Employee_produce(int product)
{
	int_product = product;
}
Employee_produce::Employee_produce(string name, int year, long salary, int product):Employee( name,year,salary)
{
	int_product = product;
}
Employee_produce::Employee_produce(const Employee_produce& a):Employee(a)
{
	int_product = a.int_product;
}
void Employee_produce::input()
{
	Employee::input();
	cout << "\nInput the number of Product: "; cin >> int_product;
}
void Employee_produce::output()
{
	Employee::output();
	cout << "\nInput the number of Product: "<< int_product;
}
long Employee_produce::salary()
{
	return Employee::salary() + int_product * 2000;
}