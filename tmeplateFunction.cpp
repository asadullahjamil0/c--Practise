#include <iostream>
using namespace std;

template <typename T>
// T getMax(T a, T b)
// {
//     return (a > b) ? a : b;
// }

void bubbleSort(T arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    // Finding max number between integer data type
    // int resultInt = getMax(56, 32);
    // cout << "Maximum number between 56 and 32: " << resultInt << endl;

    // Finding max number between float data type
    // float resultFloat = getMax(73.78, 91.02);
    // cout << "Maximum number between 73.78 and 91.02: " << resultFloat << endl;

    // Finding max number between char data type
    // char resultChar = getMax('A', 'B');
    // cout << "Maximum number between A and B: " << resultChar << endl;

    // Another Example of Template function
    int arr[] = {4, 9, 8, 1, 6,2};
    float arr1[] = {4.3, 7.2, 2.3, 1.9};

    bubbleSort(arr, 6);
    bubbleSort(arr1, 4);

    cout << "Sorted Int array: ";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl
         << "Sorted Float array: ";
    for (int i = 0; i < 4; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}