#include "Truck.h"

Truck::Truck()
{
	Vehicle::Vehicle();
	type = "Truck";
}
void Truck::add_weight()
{
	Vehicle::add_weight();
}
void Truck::remove_weight()
{
	Vehicle::remove_weight();
}
void Truck::add_fuel()
{
	Vehicle::add_fuel();
}
void Truck::length()
{
	Vehicle::length();
}
double Truck::getFuel_left ()
{
	double s = m_fuel - ((m_length * 0.2) + (m_weight * 0.001));
	return s;
	
}
double Truck::run_length()
{
	return(m_fuel - (m_weight * 0.001)) / 0.2;
}
string Truck::getType()
{
	return type;
}