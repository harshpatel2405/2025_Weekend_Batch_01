#include <iostream>
using namespace std;

class Student
{
    // * private will be there in default
    // private:
public:
    // * variables
    int age;
    string name;
    float marks;
    bool isPresent = true;
};

int main()
{
    Student s1;

    s1.age = 45;
    s1.name = "ram";
    s1.marks = 498.45;

    cout << "Age : " << s1.age << endl;
    cout << "Name : " << s1.name << endl;
    cout << "Marks : " << s1.marks << endl;
    cout << "isPresent : " << s1.isPresent << endl;
    return 0;
}