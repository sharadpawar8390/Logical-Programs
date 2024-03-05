// 5) Write a program which accept area in square feet and convert it into square meter.
//    (1 square feet = 0.0929 square meter)

#include<stdio.h>

double SquareMeter(int iNo)
{
    double dAns = 0.0;

    dAns = 0.0929 * iNo;

    return dAns;
}

int main()
{
    float iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet ");
    scanf("%f",&iValue);

    dRet = SquareMeter(iValue);

    printf("Convert square feet into square meter :%f",dRet);

    return 0;
}