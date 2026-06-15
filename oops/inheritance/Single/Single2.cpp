#include <iostream>
using namespace std;

class Person
{
    string name;
    int age;
    double height;
    double weight;

protected:
    Person(string n, int a, double w, double h)
    {
        name = n;
        age = a;
        weight = w;
        height = h;
        cout << "Person class Initialised Successfully" << endl;
    }

    void displayDataPerson()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Weight : " << weight << endl;
        cout << "Height : " << height << endl;
    }
};

class Student : protected Person
{
    int rollNo;
    int std;
    float marks;

public:
    Student(string n, int a, double w, double h, int r, int s, float m) : Person(n, a, w, h)
    {
        rollNo = r;
        std = s;
        marks = m;
        cout << "Student class Initialised Successfully" << endl;
    }

    void displayDataStudent()
    {
        displayDataPerson();
        cout << "Roll Number : " << rollNo << endl;
        cout << "Standard : " << std << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main()
{
    Student s("Harsh", 18, 70, 170, 101, 12, 99);
    s.displayDataStudent();
    return 0;
}