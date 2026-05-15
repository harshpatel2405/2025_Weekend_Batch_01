#include <iostream>
using namespace std;

int main()
{
    int n = 4125;
    int temp = n;
    int count = 0;

    while (n > 0)
    {
        int ld = n % 10; // * returns remainder (which is last digit of the number)
        cout << ld << "\t";
        count++;
        n = n / 10;
    }

    n = temp;

    cout << "\nNumber of digits in " << n << " is " << count << endl;
    cout << "Value of n after loop is " << temp << endl;
    return 0;
}