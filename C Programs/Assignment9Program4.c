// 4) Write a program which accept temperature in fuhrenheit and convert it into celsius.
//    (1 celsius = (fahrenheit - 32) * 5/9)).

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dAns = 0.0;

    dAns = (fTemp - 32) * 5/9;
    return dAns;
} 

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Convert temperature(Fh) into celsius is : %f ",dRet);

    return 0;
}