#include "Vehicle.h"
#include "MotorBike.h"
#include "Truck.h"

void main()
{
	cout << "Vehicle: " << endl;
	Vehicle a;
	a.add_fuel();
	a.add_weight();
	a.length();
	cout << "Fuel left in the vihicle: " << a.getFuel_left() << endl<<endl;
	
	cout << "MotorBike: " << endl;
	MotorBike b;
	b.add_fuel();
	b.add_weight();
	b.length();
	cout << "Run the Motorbike a length of km: " << b.run_length() << endl;
	cout << "Fuel left in the vihicle: " << b.getFuel_left() << endl<<endl;

	cout << "Truck: " << endl;
	Truck c;
	c.add_fuel();
	c.add_weight();
	c.length();
	cout << "Run the Truck a length of km: " << c.run_length() << endl;
	cout << "Fuel left in the Truck: " << c.getFuel_left() << endl<<endl;


	_getch();
}