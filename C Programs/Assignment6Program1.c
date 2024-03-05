// 1) Write a program which accept number from user and print that number of $ and * on screen.

#include<stdio.h>
void pattern(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;
    
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("$  * ",iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    pattern(iValue);

    return 0;
}