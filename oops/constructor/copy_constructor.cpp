/*
* CPP has one default copy constructor
* if you pass object as an arguments , that default copy constructor will get called

* now if you want some customization in copy constructor , you have to make one
*/

#include <iostream>
using namespace std;

class Vehicle
{
    string name;
    string fuelType;
    int passengerCapacity;
    bool isManual;
    int hp;

public:
    Vehicle()
    {
        name = "Maruti Suzuki Alto";
        fuelType = "Diesel";
        passengerCapacity = 4;
        isManual = true;
        hp = 68;
    }

    Vehicle(Vehicle &v)
    {
        name = "Alto Duplicate";
        isManual = v.isManual;
        hp = v.hp - 5;
        passengerCapacity = v.passengerCapacity;
        fuelType = "Petrol";
    }

    Vehicle(Vehicle &v1, Vehicle &v2)
    {
        name = "Alto Duplicate";
        isManual = v1.isManual;
        hp = v1.hp + v2.hp;
        passengerCapacity = v1.passengerCapacity;
        fuelType = "Petrol";
    }

    void displayData()
    {
        cout << "Name : " << name << endl;
        cout << "Fuel Type : " << fuelType << endl;
        cout << "Passenger Capacity : " << passengerCapacity << endl;
        cout << "Is Manual : " << isManual << endl;
        cout << "Horse Power : " << hp << endl;
    }
};

int main()
{
    Vehicle v1;

    // v1.displayData();

    Vehicle v2(v1); // * object is passed as an argument
    v2.displayData();

    Vehicle v3(v1, v2); // * object is passed as an argument
    v3.displayData();

    return 0;
}