// 3) Write a program which accept distance in kilometre and convert it into meter .
//    (1 kilometre = 1000 Meter)

#include<stdio.h>
int KMtoMeter(int iNo)
{
    int iAns = 0;
    
    iAns = iNo * 1000;
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter kilometre :");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Convert KM to meter is:%d",iRet);

    return 0;
}