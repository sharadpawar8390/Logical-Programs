/* 3) Accept number of rows and number of columns from user and display below pattern.

 Input : iRow = 3  iCol = 5

 Output :  5 4 3 2 1
           5 4 3 2 1
           5 4 3 2 1
*/  

#include<Stdio.h>

void pattern(int iRow,int iCol)
{
    int i = 0, j = 0;
    
    for(i = iRow;i >= 1;i--)
    {
        for(j = iCol;j >= 1;j--)
        {
            printf("%d\t",j);
        }
        printf("\n\n");
    }
     
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows and columns :\n ");
    scanf("%d %d",&iValue1,&iValue2);

    pattern(iValue1,iValue2);

    return 0;
}