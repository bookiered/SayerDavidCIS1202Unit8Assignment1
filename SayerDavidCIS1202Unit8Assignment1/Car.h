//David Sayer
//CIS 1202
//4/19/22
#pragma once

#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include <iostream>

using namespace std;

//Defines the car class which builds off of the Vehicle class
class Car : public Vehicle
{
private:
	int doors;

public:
	Car(string manufacturer, int year, int doors);
	//Getters and setters
	int getDoors();
	void setDoors(int doors);
	void displayInfo();
};

#endif
