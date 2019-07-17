#include "Vehicle.h"

Vehicle::Vehicle()
{
	m_fuel = 0;
	m_weight = 0;
	m_length=0;
}
void Vehicle::add_weight()
{
	double n;
	cout << "Add a weight of goods to the vehicle: "; cin >> n;
	m_weight = m_weight + n;
}
void Vehicle::remove_weight()
{
	double n;
	cout << "Remove a weight of goods to the vehicle: "; cin >> n;
	m_weight = m_weight - n;
}
void Vehicle::add_fuel()
{
	double n;
	cout << "Add an amount of fuel to the vehicle "; cin >> n;
	m_fuel = m_fuel + n;
}
void Vehicle::length()
{
	double n;
	cout << "Run the vehicle a length of km: "; cin >> n;
	m_length = n;
}

double Vehicle::getFuel_left()
{
	return m_fuel;
}
string Vehicle::getType()
{
	return "Vehicle";
}