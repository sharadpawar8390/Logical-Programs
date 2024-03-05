// 5) Write a recursive program which accept number from user and return its product of digits

#include<stdio.h>

int Multi(int iNo)
{
    static int iDigit = 1;
    static int iMulti = 1;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iMulti = iMulti * iDigit;
        iNo = iNo / 10;
        Multi(iNo);
    }
    return iMulti;
}

int main()
{
    int iRet = 0,iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Multi(iValue);
    printf("Product is : %d",iRet);

    return 0;
}