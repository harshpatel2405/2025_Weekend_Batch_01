#include <iostream>
using namespace std;

class Student
{
    int age;
    string name;
    float marks;
    static int studentCount;

public:
    void updateStudent()
    {
        studentCount++;
    }

    static int getStudentCount()
    {
        return studentCount;
    }
};

// * syntax to initialize static variable
int Student ::studentCount = 0;

int main()
{
    Student s1;
    s1.updateStudent();
    cout << Student ::getStudentCount();
    return 0;
}