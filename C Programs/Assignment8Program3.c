// 3) Write a program to find even factorial of given number.

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
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
        return (iNo * EvenFactorial((iNo-1)/2));
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of number is %d",iRet);

    return 0;
}