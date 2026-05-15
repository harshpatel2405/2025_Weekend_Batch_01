#include <iostream>
using namespace std;

int main()
{
    int n;
    int digit;
    bool isElementFound = false;

    cout << "Enter the number : ";
    cin >> n;
    int temp = n;

    cout << "Enter the digit you want to search in the number : ";
    cin >> digit;

    while (n > 0)
    {
        int ld = n % 10;

        if (ld == digit)
        {
            cout << digit << " is present in the " << temp;
            isElementFound = true;
            break;
        }

        n = n / 10;
    }

    if (isElementFound == false)
    {
        cout << digit << " is not present in the " << temp;
    }
    return 0;
}