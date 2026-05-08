/*
Parking Reservation System

parkingCapacity = 10

AvailableSlots = 10
occupiedSlots = 0

price = 50
*/
#include <iostream>
using namespace std;

int main()
{
    int parkingCapacity;
    int choice;
    int price = 0;
    int vehicleAddCount = 0;
    int vehicleRemoveCount = 0;

    cout << "Enter Parking Capacity : ";
    cin >> parkingCapacity;

    int availableSlots = parkingCapacity;
    int occupiedSlots = 0;

    do
    {

        cout << "\n-----------------------\nSelect Parking Operation\n------------------------\n";
        cout << "1. Add a Vehicle\n2. Remove Vehicle\n3. Display Details\n4. Exit\nEnter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (availableSlots > 0)
            {
                availableSlots--;
                occupiedSlots++;
                cout << "Vehicle Added Successfully...\n";
                cout << "Available Slots : " << availableSlots << endl;
                cout << "Occupied Slots : " << occupiedSlots << endl
                     << endl;
                price += 50;
                vehicleAddCount++;
            }
            else
            {
                cout << "No more vehicle can be added....Parking is Fulll\n\n";
            }
            break;
        case 2:
            if (occupiedSlots == 0)
            {
                cout << "No vehicle can be removed.." << endl
                     << endl;
            }
            else
            {
                availableSlots++;
                occupiedSlots--;
                cout << "Vehicle Removed Successfully...\n";
                cout << "Available Slots : " << availableSlots << endl;
                cout << "Occupied Slots : " << occupiedSlots << endl
                     << endl;
                vehicleRemoveCount++;
            }
            break;
        case 3:
            cout << "Parking Capacity : " << parkingCapacity << endl;
            cout << "Available Slots : " << availableSlots << endl;
            cout << "Occupied Slots : " << occupiedSlots << endl
                 << endl;
            break;
        case 4:
            cout << "Day is Over...\nGoing to Reports Section..\n\n";
            break;
        default:
            cout << "Enter values between 1 and 4 only..\n\n";
        }
    } while (choice != 4);

    cout << "\n---------------\nReports Section\n---------------\n";
    cout << "Parking Capacity : " << parkingCapacity << endl;
    cout << "Available Slots : " << availableSlots << endl;
    cout << "Occupied Slots : " << occupiedSlots << endl;
    cout << "Total Vehicles Added : " << vehicleAddCount << endl;
    cout << "Total Vehicles Removed : " << vehicleRemoveCount << endl;
    cout << "Day's Collection : " << price << endl;
    return 0;
}