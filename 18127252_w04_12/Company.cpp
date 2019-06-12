#include "Company.h"

void Company::input()
{
	int n;
	cout << "\nInput number of Employee, need add: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nThe Employee " << i+1 << " :";
		Employee a;
		a.input();
		list_Employee.push_back(a);
		cout << endl;
	}
	m_Employee = m_Employee + n;
}
void Company::output()
{
	for (int i = 0; i < m_Employee; i++)
	{
		list_Employee[i].output();
		cout << endl;
	}
}
long Company::sum_salary()
{
	long sum=0;
	for (int i = 0; i < m_Employee; i++)
	{
		sum = sum + list_Employee[i].salary();
	}
	return sum;
}
void Company::find_employee()
{
	string tl;
	cin.ignore();
	cout << "\nInput name of Employee,need to find: ";
	getline(cin, tl);
	for (int i = 0; i < m_Employee; i++)
	{
		if (tl == list_Employee[i].Name())
		{
			cout << "\nProfile of Employee need to find: ";
			list_Employee[i].output();
			break;
		}
	}
}