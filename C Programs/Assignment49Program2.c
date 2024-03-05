//2) Write a recursive program which accept number from user and return summation of its digits.
#include<stdio.h>

int SumDigitR(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = SumDigitR(iValue);
    printf("Sum of Digit are : %d",iRet);

    return 0;
}