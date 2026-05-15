#include <iostream>
using namespace std;

int main()
{
    int n = 12321;
    int rev = 0;
    int temp = n;

    while (n > 0)
    {
        int ld = n % 10;
        rev = rev * 10 + ld;
        n = n / 10;
    }

    cout << "Reverse of " << temp << " is " << rev << endl;

    if (rev == temp)
    {
        cout << temp << " is palindrome";
    }
    else
    {
        cout << temp << " is not palindrome";
    }
    return 0;
}