#include <iostream>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    Teacher(string n, string d, string pl, double s)
    {
        name = n;
        dept = d;
        programmingLanguage = pl;
    }
    string name;
    string dept;
    string programmingLanguage;

    void setSal(double s)
    {
        salary = s;
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
