/*
4) Write a program which checks whether 7th & 8th & 9th bit is On or 
OFF.

*/

import java.util.*;

class Assignment37Program4
{
    public static boolean CheckBit(int iNo)
    {
        int iMask = 0X000001c0;
        int iResult = 0;
        iResult = iNo & iMask;

         if(iResult == iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner (System.in);
        int iNo = 0;
        boolean bRet = false;
        
        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

         bRet = CheckBit(iNo);

         if(bRet == true)
        {
            System.out.println("7th & 8th & 9th bit are ON");
        }
        else
        {
            System.out.println("7th & 8th & 9th bit are OFF");
        }        
    }
}
