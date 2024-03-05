/*
1) Write generic program to multiply two numbers.

*/

#include<iostream>
using namespace std;

template <class T>
T Multiplication(T No1, T No2)
{
    T Ans = 0.0;
    Ans = No1 * No2;
    return Ans;
}

int main()
{
    int iValue1 = 10, iValue2 = 11, iRet = 0;
    float fValue1 = 10.9f, fValue2 = 11.6f, fRet = 0.0;
    double dValue1 = 18.9, dValue2 = 15.6, dRet = 0.0;

    iRet = Multiplication(iValue1, iValue2);
    cout<<"Multiplication is : "<<iRet<<"\n";

    fRet = Multiplication(fValue1, fValue2);
    cout<<"Multiplication is : "<<fRet<<"\n";

    dRet = Multiplication(dValue1, dValue2);
    cout<<"Multiplication is : "<<dRet<<"\n";

    return 0;
}