#pragma once
#include "Vehicle.h"

class Truck :public Vehicle
{
private:
	string type;
public:
	Truck();
	void add_weight();
	void remove_weight();
	void add_fuel();
	void length();
	double run_length();
	double getFuel_left();
	string getType();
 };
