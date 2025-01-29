#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    // ~Person()
    // {
    //     cout << "I am Person's Destructor!" << endl;
    // }
};

class Student : public Person
{
public:
    int rollNo;
    Student(string name, int age, int rollNo) : Person(name, age)
    {
        this->name = name;
        this->age = age;
        this->rollNo = rollNo;
    }
    // ~Student()
    // {
    //     cout << "I am a Student's Destructor!"<<endl;
    // }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "rollNo: " << rollNo << endl;
    }
};

int main()
{
    Student s1("AsadUllah Jamil", 34, 191656);
    s1.getInfo();

    return 0;
}