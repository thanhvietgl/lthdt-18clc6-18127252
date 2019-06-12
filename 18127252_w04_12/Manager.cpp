#include "Manager.h"

Manager::Manager()
{
	heSoChucVu = 1;
	m_thuong = 0;
}
Manager::Manager(int heSo, long thuong)
{
	heSoChucVu = heSo;
	m_thuong = thuong;
}
Manager::Manager(string name, int year, long salary, int heSo, long thuong):Employee(name,year,salary)
{
	heSoChucVu = heSo;
	m_thuong = thuong;
}
Manager::Manager(const Manager& a):Employee(a)
{
	heSoChucVu = a.heSoChucVu;
	m_thuong = a.m_thuong;
}
void Manager::input()
{
	Employee::input();
	cout << "\nMoi nhap He So Chuc Vu: "; cin >> heSoChucVu;
	cout << "\nMoi nhap so tien Thuong: "; cin >> m_thuong;
}
void Manager::output()
{
	Employee::output();
	cout << "\nMoi nhap He So Chuc Vu: "<< heSoChucVu;
	cout << "\nMoi nhap so tien Thuong: "<< m_thuong;
}
long Manager::salary()
{
	return Employee::salary() * heSoChucVu + m_thuong;
}