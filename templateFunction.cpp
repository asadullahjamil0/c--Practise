#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    cout << "Multiplying two integer numbers: " << add(65, 66) << endl;
    cout << "Multiplying two float numbers: " << add(44.72, 31.95) << endl;
    cout << "Multiplying two character: " << add(' ', '!') << endl;

    return 0;
}