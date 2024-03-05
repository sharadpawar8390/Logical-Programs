// 1) Accept number from user and display below pattern.

// Input : 5

// Output : A B C D E

#include<Stdio.h>

void pattern(int iNo)
{
    int iCnt = 0;
    char ch = 'A';
    
    for(iCnt = 1;iCnt <= iNo;iCnt++,ch++)
    {
        printf("%c\t",ch);
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