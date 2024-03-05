// 1) Accept N numbers from user and return diference between summation of even elements and summation of odd elements.

// Input :   N :  6
//           Elements : 85 66 3 80 93 88

// Output : 53 ( 234 - 181)

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int iCnt = 0;
    int iSumEven = 0;
    int iSumOdd = 0;
    int iDiff = 0;

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if((Arr[iCnt ] % 2) == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        if((Arr[iCnt] % 2) != 0)
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }
    iDiff = iSumEven - iSumOdd;
    return iDiff;
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

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements :\n",iSize);
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter element %d :",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);

    printf("Result is %d :",iRet);

    free(p);

    return 0;
}