// 1) Write a program which accept number from user and if number is less than 50 then print small,
//    if it is greater than 50 and 100 then print medium ,
//    if it is greater than 100 then print large 

#include<stdio.h>
void Display (int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if(iNo >= 50 && iNo <= 100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter number :");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}