#include <iostream>
using namespace std;
// * on         fn
// * 12131324 = 1234

int main()
{
    long int on = 156155601;
    long int fn = 0;
    long int rev = 0;

    while (on > 0)
    {
        int ld = on % 10;
        rev = rev * 10 + ld;
        on = on / 10;
    }

    on = rev;

    while (on > 0)
    {
        int old = on % 10;
        int temp = fn;

        int isUnique = 1;
        while (fn > 0)
        {
            int fld = fn % 10;
            if (old == fld)
            {
                isUnique = 0;
                break;
            }
            fn = fn / 10;
        }
        if (isUnique)
        {
            temp = temp * 10 + old;
        }
        fn = temp;

        on = on / 10;
    }

    cout << fn;

    return 0;
}