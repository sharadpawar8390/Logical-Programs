/*
2) Write a program which accept one number from user and off 7th and 10th 
bit of that number. Return modified number.

*/

import java.util.*;

class Assignment38Program2
{
    public static int OffBit(int iNo)
    {
        int iMask = 0X00000240;
        int iResult = 0;
        iResult = iNo & iMask;

         if(iResult == iMask)    // 7th & 10th bit is ON
        {
            return(iNo ^ iMask);
        }
        else                    //  7th 7 10th bit is OFF
        {
            return iNo;
        }
    }
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner (System.in);
        int iNo = 0;
        int iRet = 0;
        
        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        iRet = OffBit(iNo);

        System.out.println("Updated number is : "+iRet);  
    }
}
