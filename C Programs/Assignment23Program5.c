/* 5. Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 5  iCol = 5

Output :  /* 4. Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 6  iCol = 6

Output :  1 2 3 4 5
          1 2     5
          1   3   5
          1     4 5
          1 2 3 4 5
*/

#include<stdio.h>

void pattern(int iRow,int iCol)
{
    int i = 0,j = 0;

    for(i = 1;i <= iRow;i++)
    {
        for(j = 1;j <= iCol;j++)
        {
            if((i == j) || (i == 1) || (j == 1) || (i == iRow) || (j == iCol))
            {
                printf("%d\t",j);
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n\n");   
    }

}
int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter the number of rows and columns : \n");
    scanf("%d %d",&iValue1,&iValue2);

    pattern(iValue1,iValue2);

    return 0;
}