// 5) Write a program which accept total marks & obtained marks from user and calculate percentage.

#include<stdio.h>

float Percentage(int iMarks,int iTotal)
{
    float fPercentage = 0.0f;

    fPercentage = (((float)iTotal / (float)iMarks) * 100);

    return fPercentage;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks:\n");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks :\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Percentage is :%f\n",fRet);
    
    return 0;
}