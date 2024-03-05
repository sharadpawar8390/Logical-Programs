/* 5)
Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.
*/

import java.util.*;

class Assignment34Program5
{
    public static int Even(int iNo)
    {
        int iDigit;
        int iCnt = 0;
        int iSumEven = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) == 0)
            {
                iSumEven = iSumEven + iCnt;
            }
            iNo = iNo / 10;
        }
        return iSumEven;
    }

    public static int Odd(int iNo)
    {
        int iDigit;
        int iCnt = 0;
        int iSumOdd = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) != 0)
            {
                iSumOdd = iSumOdd + iCnt;
            }
            iNo = iNo / 10;
        }
        return iSumOdd;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter number :");
        iValue = sobj.nextInt();

        iRet = Even(iValue) - Odd(iValue);
        System.out.println("Difference is :"+iRet);
        
        sobj.close();
    }
}