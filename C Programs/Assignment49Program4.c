//4) Write a recursive program which accept number from user and return its factorial.

#include<stdio.h>

int Fact(int iNo)
{
    static int iFact = 1;
    static int i = 1;

    if(i <= iNo)
    {
        iFact = iFact * i;
        i++;
        Fact(iNo);
    }
    return iFact;
}

int main()
{
    int iRet = 0,iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Fact(iValue);
    printf("Factorial is : %d",iRet);

    return 0;
}