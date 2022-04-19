//David Sayer
//CIS 1202
//4/19/22
#pragma once

#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"
#include <iostream>

using namespace std;

//Defines the truck class which builds off of the Vehicle class
class Truck : public Vehicle
{
private:
	int towing;

public:
	Truck(string manufacturer, int year, int towing);
	//Getters and setters
	int getTowing();
	void setTowing(int towing);
	void displayInfo();
};

#endif
