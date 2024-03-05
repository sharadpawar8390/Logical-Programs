// 4) Write program which accept number from user and return summation of all its non factors.
/*
Input  : 12
Output : 50

Input  : 13
Output : 77
*/

#include<stdio.h>
int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(iCnt=2;iCnt<=iNo;iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
          iSum = iSum + iCnt;
            
        }
    }
    return iSum;
}
int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number\n");
  scanf("%d",&iValue);

  iRet = SumNonFact(iValue);

  printf("%d",iRet);
  
  return 0;

}
