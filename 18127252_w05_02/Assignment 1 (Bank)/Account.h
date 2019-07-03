#include "Header.h"
//#include"SecondAccount.h"

class Account
{
private:
	string ID;
	string Pass;
	int *money;
	
public:
	Account();
	void add_account();
	void set_Account(string id, string pass);
	void cash_in();
	void cash_out();
	int balance();
	void set_money(int m);
	void link_account(const Account* a);
	
};
