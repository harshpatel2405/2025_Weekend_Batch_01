// * IF any digit is zero , remove that from the number and make a new number
// * 102030102 -> 12312
#include <iostream>
using namespace std;

int main()
{
    long int originalNumber;
    long int finalNumber = 0;
    int temp = finalNumber;

    cout << "Enter a number : ";
    cin >> originalNumber;

    temp = originalNumber;

    while (originalNumber > 0)
    {
        int ld = originalNumber % 10;

        if (ld != 0)
        {
            finalNumber = finalNumber * 10 + ld;
        }

        originalNumber /= 10;
    }
    originalNumber = temp;

    int rev = 0;
    temp = finalNumber;

    while (temp > 0)
    {
        int ld = temp % 10;
        rev = rev * 10 + ld;
        temp = temp / 10;
    }

    finalNumber = rev;

    cout << "After Removing zeros -> '" << originalNumber << "' becomes '" << finalNumber << "'";

    return 0;
}