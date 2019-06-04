
#include "School.h"


School::School()
{
	m_Name = " ";
	m_email = " ";
	m_address = " ";
	m_cellnumber = " ";
}
School::School(string name, string email, string address, string cellnumber)
{
	m_Name = name;
	m_email = email;
	m_address = address;
	m_cellnumber = cellnumber;
}
School::School(string name, string email, string address)
{
	m_Name = name;
	m_email = email;
	m_address = address;
	m_cellnumber = " ";
}
School::School(string name, string email)
{
	m_Name = name;
	m_email = email;
	m_address = " ";
	m_cellnumber = " ";
}
School::School(string name)
{
	m_Name = name;
	m_email = " ";
	m_address = " ";
	m_cellnumber = " ";
}
void School::print_Name()
{
	cout << m_Name;
}
void School::print()
{
	cout << "\nThe Name of School: " << m_Name;
	cout << "\nThe email of School: " << m_email;
	cout << "\nThe address of School: " << m_address;
	cout << "\nThe cell phone number of School: " << m_cellnumber;
}
void School::updateName(string name)
{
	m_Name = name;
}