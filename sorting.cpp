#include <iostream>

using namespace std;

int main(){
    int myArr[5] = {7,4,6,2,1};
    int n = 5;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0 ; j < n - 1 -i; j++)
        {
            if (myArr[j] > myArr[j + 1]) 
            {
                swap(myArr[j],myArr[j + 1]);
            }   
        }    
    }
    for (int i = 0; i < n; i++)
    {
        cout<<myArr[i]<<" ";
    }
    

    
}


