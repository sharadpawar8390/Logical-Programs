// 3) Write a program to find a factorial of given number.

#include<stdio.h>

int Factorial(int iNo)
{
    int iAns = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo == 0)
    {
        return 1;
    }
    else
    {
        return (iNo * Factorial(iNo - 1));
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d\n",iRet);

    return 0;
}