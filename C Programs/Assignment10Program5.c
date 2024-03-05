// 5. Write a program which accept range from user and display all numbers in between that range in reverse order.

#include<stdio.h>

void RangeDisplay(int iStart,int iEnd)
{
    int iCnt = 0;
     
    for(iCnt = iEnd;iCnt >= iStart;iCnt--)
    {
        printf("%d\n",iCnt);
    }
    if(iStart > iEnd)
    {
        printf("Invalid range");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter starting point :");
    scanf("%d",&iValue1);

    printf("Enter ending point :");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;

}