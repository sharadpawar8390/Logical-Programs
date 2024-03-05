// 4) Write a program to find odd factorial of given number.

#include<stdio.h>

 int Factorial(int iNo)
{
    if(iNo == 0 || iNo == 1)
    {
        return 1;
    }
   else 
   {
    return iNo * Factorial(iNo - 1);
   }
}
   int OddFactorial(int iNo)
{
    int iAns = 1;
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iAns *= Factorial(iCnt);
    }

    return iAns;
 } 


int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number :");
    scanf("%d",&iValue);

    
    iRet = OddFactorial(iValue);
   
    printf("Even factorial of number is %d",iValue,iRet);
    
    return 0;
}