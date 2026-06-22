#include <iostream>
using namespace std;

class Grandparent
{
    // * variables private , methods public
public:
    void getGrandParent()
    {
        cout << "This method is called from Grandparent Class" << endl;
    }
};

class Parent : protected Grandparent
{
protected:
    void getParent()
    {
        // getGrandParent();
        cout << "This method is called from Parent Class" << endl;
    }
};

class Child : protected Parent
{
public:
    void getChild()
    {
        getGrandParent();
        getParent();
        cout << "This method is called from Child Class" << endl;
    }
};

int main()
{
    Child c;
    c.getChild();
    return 0;
}