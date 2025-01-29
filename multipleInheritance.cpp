#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

class Student
{
public:
    int rollNo;
    string researchArea;
};

class gradstudent : public Person, public Student
{
public:
    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Research Area: " << researchArea << endl;
    }
};

int main()
{
    gradstudent gs1;
    gs1.name = "AsadUllah Jamil";
    gs1.age = 34;
    gs1.rollNo = 4590;
    gs1.researchArea = "Artificial Intelligence";
    gs1.getInfo();

    return 0;
}