#include <iostream>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    string name;
    string dept;
    string programmingLanguage;

    Teacher(string name, string dept, string programmingLanguage)
    {
        this->name = name;
        this->dept = dept;
        this->programmingLanguage = programmingLanguage;
    }

    Teacher(Teacher &orgObj)
    {
        cout << "I am Copy Constructor!" << endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->programmingLanguage = orgObj.programmingLanguage;
        this->salary = orgObj.salary;
    }

    void setSal(double salary)
    {
        this->salary = salary;
    }
    void getSal()
    {
        cout << "Salary:" << salary << endl;
    }
    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Departement: " << dept << endl;
        cout << "Programming Language: " << programmingLanguage << endl;
    }
};

int main()
{
    Teacher t1("Jamil", "computerScience", "c++");

    t1.getInfo();
    t1.setSal(50000);
    t1.getSal();

    cout << "This is for 2nd Object:" << endl;
    Teacher t2(t1);
    t2.getInfo();

    return 0;
}
