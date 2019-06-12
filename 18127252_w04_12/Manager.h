#include "Employee.h"

class Manager :public Employee
{
protected:
	int heSoChucVu;
	long m_thuong;
public:
	Manager();
	Manager(int heSo,long thuong);
	Manager(string name, int year, long salary, int heSo, long thuong);
	Manager(const Manager& a);
	void input();
	void output();
	long salary();
};
