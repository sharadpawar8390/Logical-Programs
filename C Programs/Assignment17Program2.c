// 2) Accept number from user and display below pattern.

// Input : 5

// Output :  5 # 4 # 3 # 2 # 1 #

#include<Stdio.h>

void pattern(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = iNo;iCnt >= 1;iCnt--)
    {
        printf("%d\t#\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number of elements : ");
    scanf("%d",&iValue);

    pattern(iValue);

    return 0;
}