/*
4) Write generic program to accept N values from user and return largest values.
*/

#include<iostream>
using namespace std;

template<class T>
T Max(T *arr, int iSize) 
{
    T Large = arr[0]; 

    for (int i = 1; i < iSize; i++) 
    {
        if (arr[i] > Large) 
        {
            Large = arr[i];
        }
    }

    return Large;
}

int main() 
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.2, 3.7, 9.8, 8.7};

    int iRet = Max(arr, 5);
    cout<<"Largest integer value: "<<iRet<<"\n";

    float fRet = Max(brr, 4);
    cout<<"Largest float value: "<<fRet<<"\n";

    return 0;
}