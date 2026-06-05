#include <iostream>
using namespace std;

class Student
{
    // * private will be there in default
    // private:
    // * variables
    int age;
    string name;
    float marks;
    bool isPresent = true;

public:
    // * methods
    void inputData(int a, string name, float m)
    {
        age = a;
        this->name = name;
        marks = m;

        // * this will give custom values for each object
        // cout << "Enter name : ";
        // cin >> name;

        // cout << "Enter age : ";
        // cin >> age;

        // cout << "Enter Marks : ";
        // cin >> marks;

        // *  values will be same for every object
        // age = 45;
        // name = "ram";
        // marks = 498.45;
    }

    void displayData()
    {
        cout << "Age : " << age << "\tName : " << name << "\tMarks : " << marks << "\t\tisPresent : " << isPresent << endl;
    }
};

int main()
{
    Student s1;
    Student s2;

    s1.inputData(22, "Harsh", 98.56);
    s2.inputData(23, "Vasu", 65.23);

    s2.displayData();
    s1.displayData();
    return 0;
}