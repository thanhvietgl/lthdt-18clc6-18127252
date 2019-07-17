#pragma once
#include "Header.h"

class Vehicle
{
protected:
	double m_fuel;
	double m_weight;
	double m_length;
public:
	Vehicle();
	virtual void add_weight();
	virtual void remove_weight();
	virtual void add_fuel();
	virtual void length();
	virtual double getFuel_left ();
	virtual string getType();
};
