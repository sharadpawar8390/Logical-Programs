// 2) Accept amount in US dollar and return its corresponding value in Indian currency,
//    consider 1$ as 70 rupees.

#include<stdio.h>

int DollarToINR(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iNo1 = 70;
    int iAns = 0;

    iAns = iNo * iNo1;
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}