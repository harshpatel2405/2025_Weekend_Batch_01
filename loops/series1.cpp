//* 1 - x²/2! + x⁴/4! - x⁶/6! + ... up to n terms
// * 1 - 2 + 0666 - 0.08
// * x^0/0!

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    int i, x = 2, n = 4;
    float ans;
    int count = 0;

    for (int i = 0; i < n * 2; i += 2)
    {
        // * power
        int power = pow(x, i);
        cout << x << "^" << i << " = " << power << endl;

        // * factorial

        float fact = std::tgamma(i + 1);
        cout << i << "! = " << fact << endl;
        if (count % 2 == 0)
        {
            ans += power / fact;
        }
        else
        {
            ans -= power / fact;
        }
        count++;

        cout << power << " / " << fact << " = " << power / fact << "\t ans = " << ans << endl
             << endl;
    }

    cout << ans;
    return 0;
}