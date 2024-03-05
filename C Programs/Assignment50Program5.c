// 5) Write a recursive program which accept number from user and return its reverse number.


#include<stdio.h>

int Reverse(int iNo)
{
    static int iDigit = 0;
    static int iReverse = 0;

    if(iNo > 0)
    {
        iDigit = iNo % 10;
        iReverse = iReverse * 10 + iDigit;
        iNo = iNo / 10;
        Reverse(iNo);
    }
    return iReverse;
}

int main()
{
    int iRet = 0,iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);
    printf("Reverse number is : %d",iRet);

    return 0;
}