// 4) Accept N number from user and accept range,display all elements from that range.

//Input : N : 6
//        Start : 60
//        End   : 90
//        Elements : 85 66 3 76 93 88
// Output : 85 66 76 88

//Input : N : 6
//        Start : 30
//        End   : 50
//        Elements : 85 66 3 76 93 88
// Output : 

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength,int iStart,int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0;
    int iValue1 = 0;
    int iValue2 = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter the number of elements :\n");
    scanf("%d",&iSize);

    printf("Enter the starting point :\n");
    scanf("%d",&iValue1);

    printf("Enter the End point :\n");
    scanf("%d",&iValue2);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elemets \n",iSize);
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter the element %d :\n",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    Display(p,iSize,iValue1,iValue2);

    free(p);

    return 0;

}