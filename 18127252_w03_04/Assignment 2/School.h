#include "Header.h"

class School
{
private:
	string m_Name;
	string m_email;
	string m_address;
	string m_cellnumber;
public:
	//Constructor
	School();
	School(string name, string email, string address, string cellnumber);
	School(string name, string email, string address);
	School(string name, string email);
	School(string name);
	//Destructor
	//~School();

	//Function
	void print_Name();
	void print();
	void updateName(string name);
};