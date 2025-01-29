#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
    void getInfo()
    {
        cout << "This is from " ;
        cout << "'Parent Class'!" << endl;
    }
};

class Student
{
public:
    int rollNo;
    string researchArea;
    void getInfo()
    {
        cout << "This is function overriding!" << endl;
        cout << "Child Class!" << endl;
    }
};

int main()
{
    Student s1;
    Person s2;
    s1.getInfo();
    s2.getInfo();

    return 0;
}