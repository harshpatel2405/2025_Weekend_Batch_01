#include <iostream>
using namespace std;

// * 5 ^ 4 = 5 * 5 * 5 * 5
/*
 * 1 * 5 = 5
 * 5 * 5 = 25
 * 25 * 5 = 125
 * 125 * 5 = 625
 */

int main()
{
    int base = 5;
    int power = 7;

    int exponent = 1;

    for (int i = 1; i <= power; i++)
    {
        // *  cout << "exponent  = " << exponent << " * " << base << " = " << exponent * base << endl;
        exponent = exponent * base;
    }

    cout << "\n"
         << base << " ^ " << power << " = " << exponent << endl;
    return 0;
}