/*
2) Write generic program to find largest number from three numbers.

*/

#include<iostream>
using namespace std;

template<class T>
T Max(T a, T b, T c)
{
    T LargeNumber = a;

    if (b > LargeNumber)
        LargeNumber = b;

    if (c > LargeNumber)
        LargeNumber = c;

    return LargeNumber;
}

int main()
{
    int No1 = 5, No2 = 10, No3 = 7;
    cout<<"The largest number is: "<<Max(No1, No2, No3)<<"\n";

    return 0;
}