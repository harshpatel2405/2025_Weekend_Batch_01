#include <iostream>
using namespace std;

// *  5! = 5 * 4 * 3 *  2 * 1
/*
 *    1 * 5 = 5
 *    5 * 4 = 20
 *    20 * 3 = 60
 *    60 * 2 = 120
 *    120 * 1 = 120
 */
int main()
{
    int n = 5;
    int fact = 1;

    for (int i = n; i >= 1; i--)
    {
        cout << "Fact = " << fact << " * " << i << " = " << fact * i << endl;
        fact = fact * i;
    }

    cout << n << "! = " << fact;
    return 0;
}