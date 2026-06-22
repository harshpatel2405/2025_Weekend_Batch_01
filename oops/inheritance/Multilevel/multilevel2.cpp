#include <iostream>
using namespace std;

class Person
{
    int age;
    string name;
    double height, weight;

public:
    Person(int a, string n, double w, double h)
    {
        age = a;
        name = n;
        weight = w;
        height = h;
    }

    void displayPerson()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Height : " << height << endl;
        cout << "Weight : " << weight << endl;
    }
};

class Student : protected Person
{
    int rollNo;
    int standard;
    char division;

public:
    Student(int a, string n, double w, double h, int ro, int st, char di) : Person(a, n, w, h)
    {
        rollNo = ro;
        standard = st;
        division = di;
    }

    void displayStudent()
    {
        displayPerson();
        cout << "Roll Number : " << rollNo << endl;
        cout << "Standard : " << standard << endl;
        cout << "Division : " << division << endl;
    }
};

class Exam : protected Student
{
    string subject[2];
    float marks[2];
    bool isPass;

public:
    Exam(int a, string n, double w, double h, int ro, int st, char di, string sub[], float ma[], bool ip) : Student(a, n, w, h, ro, st, di)
    {
        for (int i = 0; i < 2; i++)
        {
            subject[i] = sub[i];
            marks[i] = ma[i];
        }
        isPass = ip;
    }

    void displayExam()
    {
        displayStudent();
        for (int i = 0; i < 2; i++)
        {
            cout << subject[i] << " - " << marks[i] << endl;
        }
        cout << "Is Pass : " << (isPass ? "Yes" : "No");
    }
};

int main()
{
    string sub[] = {"EGD", "BME"};
    float marks[] = {35, 40};
    Exam Mid(17, "Bhavya", 55, 1.7, 101, 12, 'D', sub, marks, true);
    Mid.displayExam();
    return 0;
}

// * Task :  pass -> percentage (calculate > ) grade is not D -> Pass