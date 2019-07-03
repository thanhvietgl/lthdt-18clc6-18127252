
#include "Bank.h"


void main()
{
	Bank *abc=new Bank;
	Customer *Minh=new Customer;
	Minh->set_inf();
	Minh->add_account();
	
	Minh->cash_in();
	
	Minh->cash_out();
	
	Customer* Huy = new Customer;
	Huy->set_inf();
	Huy->add_account();
	Huy->cash_in();
	Huy->cash_out();

	Minh->cash_in();

	Customer* Linh = new Customer;
	Linh->set_inf();
	Linh->add_account();
	Linh->link_account(Minh);
	Linh->balance();
	Linh->cash_in();
	Linh->cash_out();
	_getch();
}