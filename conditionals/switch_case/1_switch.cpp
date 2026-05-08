#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout << "1. Summer\n2. Monsoon\n3. Winter\n4. Spring\nEnter Your choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Season : Summer";
        break;
    case 2:
        cout << "Season : Monsoon";
        break;
    case 3:
        cout << "Season : Winter";
        break;
    case 4:
        cout << "Season : Spring";
        break;
    default:
        cout << "Select between 1 and 4";
    }
    return 0;
}
