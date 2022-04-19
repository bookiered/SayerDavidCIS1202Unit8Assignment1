//David Sayer
//CIS 1202
//4/19/22
//I was getting a lot of errors in this program when I initially tried to run it. After looking online the only solution I could find was to use /FORCE:MULTIPLE to force file output. The output seems to look fine and the program runs fine so hopefully that is ok.

#include <iostream>
#include "string"
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Truck.cpp"

using namespace std;

int main()
{
	//Variabels used for user input
	string manufacturerIn;
	int yearIn;
	int doorIn;
	int towingIn;

	cout << "Vehicle Program\n";

	//Vehicle input and output
	cout << "\nVehicle\n";
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturerIn);

	cout << "Enter the year built: ";
	cin >> yearIn;
	cin.ignore();

	Vehicle vehicle(manufacturerIn, yearIn);
	vehicle.displayInfo();

	//Car input and output
	cout << "\nCar\n";
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturerIn);

	cout << "Enter the year built: ";
	cin >> yearIn;
	cin.ignore();

	cout << "Enter the number of doors: ";
	cin >> doorIn;
	cin.ignore();

	Car car(manufacturerIn, yearIn, doorIn);
	car.displayInfo();

	//Truck input and output
	cout << "\nTruck\n";
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturerIn);

	cout << "Enter the year built: ";
	cin >> yearIn;
	cin.ignore();

	cout << "Enter the towing capacity: ";
	cin >> towingIn;
	cin.ignore();

	Truck truck(manufacturerIn, yearIn, towingIn);
	truck.displayInfo();

	return 0;
}