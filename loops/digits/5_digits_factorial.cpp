#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number : ";
    cin >> n;

    while (n > 0)
    {
        int ld = n % 10;

        // * factorial
        int fact = 1;
        for (int i = ld; i >= 1; i--)
        {
            fact *= i;
        }
        cout << ld << "! = " << fact << endl;

        n = n / 10;
    }

    return 0;
}