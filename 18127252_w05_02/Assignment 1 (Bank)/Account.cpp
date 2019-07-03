#include "Account.h"

Account::Account()
{
	ID=" ";
	Pass=" ";
	money = NULL;


}
void Account:: add_account()
{
	money = new int;
	*money = 50000;
}
void Account::set_Account(string id, string pass)
{
	ID = id;
	Pass = pass;
}
void Account::cash_in()
{
	int n;
	cout << "\nInput the number cash in: "; cin >> n;
	*money = *money + n;
}
void Account::cash_out()
{
	int n;
	cout << "\nInput the number cash out: "; cin >> n;
	if (n > (*money - 50000))
		cout << "\nBalance is not enough!";
	else
	*money = *money - n;
}
int Account::balance()
{
	return *money;
}

void Account::set_money(int m)
{
	*money = m;
}

void Account::link_account(const Account* a)
{
	money =a->money;
}