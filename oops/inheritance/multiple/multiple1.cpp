#include <iostream>
using namespace std;

class Father
{
public:
    int a;
};

class Mother
{
public:
    int b;
};

class Child : public Father, public Mother
{
public:
    int c;

    void inputData()
    {
        cout << "Enter value for a , b , and c : ";
        cin >> a >> b >> c;
    }

    void display()
    {
        cout << "A : " << a << endl;
        cout << "B : " << b << endl;
        cout << "C : " << c << endl;
    }
};

int main()
{
    Child c;
    c.inputData();
    c.display();
    return 0;
}