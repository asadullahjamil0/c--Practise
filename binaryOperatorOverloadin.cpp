#include <iostream>
using namespace std;

class Test
{
    int num;

public:
    Test(int n)
    {
        num = n;
    }
    Test operator+(Test t2)
    {
        Test t3(0);
        t3.num = num + t2.num;
        return t3;
    }
    void display()
    {
        cout << "After adding objects: " << num << endl;
    }
};

int main()
{
    Test t1(456);
    Test t2(4738);

    Test sum(0);
    sum = t1 + t2;
    sum.display();


    return 0;
}