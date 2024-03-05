/* 1)
Write Java program which accept N numbers from user and return difference between summation of even elements and summation of odd elements.
Input : N: 6
Elements : 85 66 3 80 93 88
Output : 53 (234 - 181)
*/

import java.util.*;

class ArrayDemo
{
    public static int SumEven(int Arr[])
    {
        int iSumEven = 0;
        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr.length;iCnt++)
        {
            if((Arr[iCnt] % 2) == 0)
            {
                iSumEven = iSumEven + Arr[iCnt];
            }
        }
        return iSumEven;
    }

    public static int SumOdd(int Arr[])
    {
        int iSumOdd = 0;
        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr.length;iCnt++)
        {
            if((Arr[iCnt] % 2) != 0)
            {
                iSumOdd = iSumOdd + Arr[iCnt];
            }
        }
        return iSumOdd;
    }

    public static void main(String arg[])
    {
        Scanner scanner = new Scanner(System.in);
        int iRet = 0;

        System.out.println("Enter the value of N:");
        int iNo = scanner.nextInt();

        int[] elements = new int[iNo];

        System.out.println("Enter the elements:");
        for (int i = 0; i < iNo; i++) 
        {
            elements[i] = scanner.nextInt();
        }
        iRet = SumEven(elements) - SumOdd(elements);
         
        System.out.println("Difference is :"+iRet);

    }
}
