// 2) Accept N numbers from user and return difference between frequency of even number and odd numbers.

// Input :  N :   7
//          Elements : 85 66 3 80 93 88 90 

// Output : 1 (4 - 3)

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
    int iCnt = 0;
    int iFreEven = 0;
    int iFreOdd = 0;
    int iDiffFrequency = 0;

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iFreEven++;
        }
        if((Arr[iCnt] % 2) != 0)
        {
            iFreOdd++;
        }
    }
    iDiffFrequency = iFreEven - iFreOdd;
    return iDiffFrequency;
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    printf("Enter %d elements :\n",iSize);

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter element %d :",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p,iSize);

    printf("Result is %d\n",iRet);

    free(p);

    return 0;
}