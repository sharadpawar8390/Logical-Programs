// 2) Write a recursive program which accept number from user and return largest digit



#include<stdio.h>

int Max(int iNo)
{
    static int iDigit = 0;
    static int iMaxDigit = 0;

    if(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit > iMaxDigit)
        {
            iMaxDigit = iDigit;
        }
        iNo = iNo / 10;
        Max(iNo);
    }
    return iMaxDigit;
}

int main()
{
    int iRet = 0,iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Max(iValue);
    printf("Largest digit is : %d",iRet);

    return 0;
}