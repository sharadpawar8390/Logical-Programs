// 1) Write a recursive program which accept number from user and display below pattern.

#include<stdio.h>

void DisplayR(int iNo)
{
    if(iNo >= 1)
    {
        printf("%d\t*\t",iNo);
        DisplayR(iNo - 1);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    DisplayR(iValue);

    return 0;
}