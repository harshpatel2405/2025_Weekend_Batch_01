#include <iostream>
using namespace std;

int main()
{
    int age;

    // * print
    // cout << "Enter age : ";
    // cin >> age;
    // (age > 18) ? cout << "You can vote" : cout << "You cannot vote";

    // *  return
    // int a = 15, b = 25;
    // int ans = (a > b) ? a : b; // * store
    // cout << ans << " is greater" << endl;

    // cout << ((a > b) ? a : b) << " is greater"; // * return (print)

    int a = 910, b = 520, c = 320;
    // int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c); // *store
    // cout << max << " is greater";

    cout << ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c)) << " is greater"; // * return print
    return 0;
}