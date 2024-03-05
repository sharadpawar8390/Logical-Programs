// 4) Write a recursive program which accept number from user and return smallest digit


#include<stdio.h>

int Min(int iNo)
{
    static int iDigit = 0;
    static int iMinDigit = 9;

    if(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMinDigit)
        {
            iMinDigit = iDigit;
        }
        iNo = iNo / 10;
        Min(iNo);
    }
    return iMinDigit;
}

int main()
{
    int iRet = 0,iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Min(iValue);
    printf("Smallest digit is : %d",iRet);

    return 0;
}