// 3) Accept number from user and display below pattern.

// Input : 5

// Output :  1 * 2 * 3 * 4 * 5 *

#include<Stdio.h>

void pattern(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("%d\t*\t",iCnt);
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