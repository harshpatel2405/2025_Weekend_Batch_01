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
    // * setter
    void setAge(int age)
    {
        this->age = age;
    }

    void setMarks(float marks)
    {
        this->marks = marks;
    }

    void setName(string name)
    {
        this->name = name;
    }

    // * getter
    float getMarks()
    {
        return marks;
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }
};

int main()
{
    Student s1;
    s1.setAge(15);
    s1.setMarks(98.56);
    s1.setName("Harsh");

    cout << s1.getAge() << "\t" << s1.getMarks() << "\t" << s1.getName();

    return 0;
}