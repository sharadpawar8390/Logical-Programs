// 1) Program to divide 2 number 

#include<stdio.h>

int Divide(int iNo1,int iNo2)
{
    int iAns = 0;

    if(iNo2 > iNo1)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;

    return iAns;
}
int main()
{
    auto int iValue1 = 15;
    auto int ivalue2 = 5;
    auto int iRet = 0;

    iRet = Divide(iValue1,ivalue2);

    printf("Division is %d",iRet);

    return 0;
}