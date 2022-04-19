//David Sayer
//CIS 1202
//4/19/22

#ifndef VEHICLE_CPP
#define VEHICLE_CPP
#include <iostream>
#include "Vehicle.h"

using namespace std;

//Vehicle Object constructor
Vehicle::Vehicle(string manufacturer, int year)
{
	this->manufacturer = manufacturer;
	this->year = year;
}

//Getters and setters
inline string Vehicle::getManufacturer()
{
	return manufacturer;
}
void Vehicle::setManufacturer(string manufacturer)
{
	this->manufacturer = manufacturer;
}
inline int Vehicle::getYear()
{
	return year;
}
void Vehicle::setYear(int year)
{
	this->year = year;
}

//Used to display the vehicle info
void Vehicle::displayInfo()
{
	cout << "\nVehicle Information:\n";
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << year << endl;
}

#endif