#include <iostream>
using namespace std;

template <typename T>
T getMax(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    // Finding max number between integer data type
    int resultInt = getMax(56, 32);
    cout << "Maximum number between 56 and 32: " << resultInt << endl;

    // Finding max number between float data type
    float resultFloat = getMax(73.78, 91.02);
    cout << "Maximum number between 73.78 and 91.02: " << resultFloat << endl;


    // Finding max number between char data type
    char resultChar = getMax('A', 'B');
    cout << "Maximum number between A and B: " << resultChar << endl;

    return 0;
}