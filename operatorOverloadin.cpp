#include <iostream>
using namespace std;

class OP
{
public:
    int num;
    OP()
    {
        num = 0;
    }
    void operator++(int)
    {
        num++;
    }
    void operator++()
    {
        ++num;
    }
    void operator--(int)
    {
        num--;
    }
    void operator--()
    {
        --num;
    }
    void display()
    {
        cout << "Num:" << num << endl;
    }
};

int main()
{
    OP o1;
    o1.display();
    o1++;
    o1.display();
    ++o1;
    o1.display();

    --o1;
    o1.display();
    o1--;
    o1.display();

    return 0;
}