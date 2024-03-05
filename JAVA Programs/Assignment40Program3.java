/*
3) Write a program which accept one number from user and check whether 
9th or 12th bit is on or off.
*/

import java.util.*;

class Assignment40Program3
{
    public static boolean CheckBit(int iNo)
    {
        int iMask = 0X00000900;
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
            System.out.println("9th and 12th bit are ON");
        }
        else
        {
            System.out.println("9th and 12th bit are OFF");
        }     
    }
}
