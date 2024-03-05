// 5) Accept N numbers from user and accept one another number as NO, return frequency of NO from it.

// Input :  N : 6
//          NO : 66
//          Elements : 85 66 3 66 93 88 

// Output : 2

// Input :  N : 6
//          NO : 66
//          Elements : 85 11 3 15 11 111 

// Output : 0

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt]  == iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iSize = 0;
    int iValue = 0;
    int iCnt = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter number of elements :\n");
    scanf("%d",&iSize);

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    p = (int*)malloc(iSize * sizeof(int));

    printf("Enter %d elements : \n",iSize);

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter element %d :",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }
    
    iRet = Frequency(p,iSize,iValue);

    printf("Result is %d\n",iRet);

    free(p);

    return 0;
}