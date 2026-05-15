#include <iostream>
using namespace std;

int main()
{
    int n = 1234;
    int temp = n;

    //*  sum
    int sum = 0;
    while (n > 0)
    {
        int ld = n % 10;

        cout << "Sum = " << sum << " + " << ld << " = " << sum + ld << endl;
        sum = sum + ld; // * sum += ld;

        n = n / 10;
    }

    n = temp;
    cout << "\nSum of Digits of " << n << " is " << sum << endl
         << endl
         << endl;

    //*  mul
    int mul = 1;
    while (n > 0)
    {
        int ld = n % 10;

        cout << "Multiplication = " << mul << " * " << ld << " = " << mul * ld << endl;
        mul = mul * ld; // * mul *= ld;

        n = n / 10;
    }

    n = temp;
    cout << "\nMultiplication of Digits of " << n << " is " << mul << endl;

    //*  odd_even_print
    int eSum = 0, oSum = 0;
    while (n > 0)
    {
        int ld = n % 10;

        if (ld % 2 == 0)
        {
            cout << "Even : " << ld << endl;
            eSum += ld;
        }
        else
        {
            cout << "Odd : " << ld << endl;
            oSum += ld;
        }
        n = n / 10;
    }

    cout << "Sum of Odd Digits of " << temp << " is " << oSum<<endl;
    cout << "Sum of Even Digits of " << temp << " is " << eSum<<endl;
    return 0;
}