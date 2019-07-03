#include "Header.h"
#include "Account.h"


class Customer
{
private:
	string m_name;
	string Dob;
	string m_email;
	string m_sex;
	string m_number;
	vector<Account*> list_account;
	
public:
	Customer();
	void set_inf();
	void add_account();
	void link_account(const Customer*a);
	void cash_in();
	void cash_out();
	void balance();
};
