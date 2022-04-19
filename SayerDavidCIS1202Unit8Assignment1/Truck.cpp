//David Sayer
//CIS 1202
//4/19/22

#ifndef TRUCK_CPP
#define TRUCK_CPP
#include "Truck.h"
#include "Vehicle.h"
#include "Vehicle.cpp"
#include <iostream>

using namespace std;

//Truck object Constructor
Truck::Truck(string m, int y, int tow) : towing(tow), Vehicle(m, y)
{
}

//Getters and setters
int Truck::getTowing()
{
	return towing;
}
void Truck::setTowing(int towing)
{
	this->towing = towing;
}

//Displays the info for the truck object
void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Towing capacity: " << towing << endl;
}

#endif