 /*
5) Write generic program to accept N values from user and return smallest value.
*/

#include<iostream>
using namespace std;

template<class T>
T Min(T *arr, int iSize) 
{
    T Small = arr[0]; 

    for (int i = 1; i < iSize; i++) 
    {
        if (arr[i] < Small) 
        {
            Small = arr[i];
        }
    }

    return Small;
}

int main() 
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0, 3.7, 9.8, 8.7};

    int iRet = Min(arr, 5);
    cout<<"Smallest integer value: "<<iRet<<"\n";

    float fRet = Min(brr, 4);
    cout<<"Smallest float value: "<<fRet<<"\n";

    return 0;
}