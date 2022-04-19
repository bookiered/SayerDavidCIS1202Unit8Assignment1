//David Sayer
//CIS 1202
//4/19/22

#ifndef CAR_CPP
#define CAR_CPP
#include "Car.h"
#include "Vehicle.h"
#include "Vehicle.cpp"
#include <iostream>

using namespace std;

//Car object Constructor
Car::Car(string manufacturer, int year, int doors) : doors(doors), Vehicle(manufacturer, year)
{
}

//Getters and setters
int Car::getDoors()
{
	return doors;
}
void Car::setDoors(int doors)
{
	this->doors = doors;
}

//Displays the info for the car object
void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Doors: " << doors << endl;
}


#endif