#include "MotorBike.h"

MotorBike::MotorBike()
{

	Vehicle::Vehicle();
	type = "MotorBike";
}
void MotorBike::add_weight()
{
	Vehicle::add_weight();
}
void MotorBike::remove_weight()
{
	Vehicle::remove_weight();
}
void MotorBike::add_fuel()
{
	Vehicle::add_fuel();
}
void MotorBike::length()
{
	Vehicle::length();
}
double MotorBike::run_length()
{
	return(m_fuel - (m_weight * 0.01)) / 0.02;
}
double MotorBike::getFuel_left()
{
	double s = m_fuel - ((m_length * 0.02) + (m_weight * 0.01));
	return s;
}
string MotorBike::getType()
{
	return type;
}