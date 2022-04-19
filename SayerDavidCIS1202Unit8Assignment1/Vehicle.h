//David Sayer
//CIS 1202
//4/19/22
#pragma once

#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>

using namespace std;

//Defines the vehicle class
class Vehicle
{
//Member variables
private: 
	string manufacturer;
	int year;

//Functions
public:
	Vehicle(string manufacturer, int year);
	//Getters and setters
	string getManufacturer();
	void setManufacturer(string manufacturer);
	int getYear();
	void setYear(int year);
	virtual void displayInfo();
};
#endif
