#include "Customer.h"

Customer::Customer()
{
	m_name=" ";
	Dob = " ";
	m_email = " ";
	m_sex = " ";
	m_number = " ";
}

void Customer::add_account()
{
	if (list_account.size() >= 10)
		cout << "\nYou had 10 Account !";
	else
	{
		
		Account *a=new Account;
		a->add_account();
		
		a->set_Account(m_name, m_number);
		list_account.push_back(a);
	}
}

void Customer::link_account(const Customer* a)
{
	list_account.at(0)->link_account(a->list_account.at(0));
}

void Customer::cash_in()
{
	string tl;
	do
	{
		int n;
		cout << "\nYou have " << list_account.size() << " Account!";
		cout << "\nInput the Account need cash in: "; cin >> n;
		list_account.at(n - 1)->cash_in();
		cout << "\nDo you want continue:(Yes/No) "; cin >> tl;
	} while (tl == "Yes");
	if(tl=="No") cout << "\nDONE!";
}
void Customer::cash_out()
{
	string tl;
	do
	{
		int n;
		cout << "\nYou have " << list_account.size() << " Account!";
		cout << "\nInput the Account need cash out: "; cin >> n;
		list_account.at(n - 1)->cash_out();
		cout << "\nDo you want continue:(Yes/No) "; cin >> tl;
	} while (tl == "Yes");
	if (tl == "No") cout << "\nDONE!";
}

void Customer::set_inf()
{
	cout << "\nInput name: ";cin>> m_name;
	cout << "\nInput Dob: "; cin >> Dob;
	cout << "\nInput email: "; cin >> m_email;
	cout << "\nInput sex: "; cin >> m_sex;
	cout << "\nInput number: "; cin >> m_number;
}

void Customer::balance()
{
	cout << list_account.at(0)->balance();
}