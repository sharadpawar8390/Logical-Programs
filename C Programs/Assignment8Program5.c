// 5) Write a program which returns difference between Even factorial and odd factorial of given number.

#include<stdio.h>

int Factorial(int n)
{
    int fact = 1;
    for (int iCnt = 1; iCnt <= n; iCnt++)
    {
        fact *= iCnt;
    }
    return fact;
}

int FactorialDiff(int iNo)
{
    int even_fact = 1, odd_fact = 1;

    for(int iCnt = 2; iCnt <= iNo; iCnt++)
    {
        even_fact *= Factorial(iCnt);
    }
    
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        odd_fact *= Factorial(iCnt);
    }

    return even_fact - odd_fact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    if(iValue < 0)
    {
    printf("Please enter non negative number\n");

    return 1;
    }

    iRet = FactorialDiff(iValue);

    printf("Factorial difference  is %d",iRet);

    return 0;
}