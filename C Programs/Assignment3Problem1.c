//1) Write a program which accept one number from user and print that number of even numbers on screen

#include<stdio.h>

void printEven(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 2;;iCnt++)
    {
        if((iNo % 2)== 0)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    printEven(iValue);
    return 0;
}