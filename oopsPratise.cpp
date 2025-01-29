#include <iostream>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    Teacher(string name, string dept, string programmingLanguage)
    {
        this->name = name;
        this->dept = dept;
        this->programmingLanguage = programmingLanguage;
    }
    string name;
    string dept;
    string programmingLanguage;

    void setSal(double salary)
    {
        this->salary = salary;
    }
    void getSal()
    {
        cout << "Salary:" << salary << endl;
    }
};

int main()
{
    Teacher t1("Jamil", "computerScience", "c++", 345000);
    cout << "Name: " << t1.name << endl;
    cout << "Departement: " << t1.dept << endl;
    cout << "Programming Language: " << t1.programmingLanguage << endl;
    t1.setSal(50000);
    t1.getSal();

    return 0;
}
