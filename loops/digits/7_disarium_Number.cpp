//  * disaium number
// * 4578 => 4^1 + 5^2 + 7^3 + 8^4 =
#include <iostream>
using namespace std;

int main()
{
    int n = 135;
    int count = 0;
    int ans;
    int dn = 0;
    int temp = n;
    int rev = 0;

    while (n > 0)
    {
        int ld = n % 10;
        rev = rev * 10 + ld;
        n = n / 10;
    }

    n = rev;
    cout << temp << " => ";
    while (n > 0)
    {
        int ld = n % 10;
        count++;

        ans = 1;
        cout << ld << "^" << count << " + ";
        for (int i = 1; i <= count; i++)
        {
            ans *= ld;
        }

        dn += ans;

        n = n / 10;
    }

    cout << "\b\b= " << dn << endl;
    if (temp == dn)
    {
        cout << temp << " is disarium Number";
    }
    else
    {
        cout << temp << " is not disarium Number";
    }
    return 0;
}