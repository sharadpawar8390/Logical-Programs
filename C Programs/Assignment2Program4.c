// 4) Accept two number from user and display first number in second number of times

// input : 12   5
// output : 12 12 12 12 12 

#include<stdio.h>

void Display(int iNo,int iFrequency)
{
    int iCnt = 0;

    for(iCnt=iNo;iCnt<=iNo;iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    printf("Enter frequency \n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}