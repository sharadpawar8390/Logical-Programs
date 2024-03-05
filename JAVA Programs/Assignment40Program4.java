/*
4) Write a program which accept one number , two positions from user and 
check whether bit at first or bit at second position is ON or OFF.
*/

import java.util.*;

class Assignment40Program4 
{
    public static boolean CheckBit(int iNo, int iPos1, int iPos2) 
    {
        int iMask = 0x00000001;
        int iResult1 = 0, iResult2 = 0;
        int iMask1 = iMask << (iPos1 - 1);
        int iMask2 = iMask << (iPos2 - 1);

        iResult1 = iNo & iMask1;
        iResult2 = iNo & iMask2;

        return (iResult1 != 0) || (iResult2 != 0);
    }

    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0, iPos1 = 0, iPos2 = 0;
        boolean bRet = false;

        System.out.println("Enter number: ");
        iNo = sobj.nextInt();

        System.out.println("Enter the first position: ");
        iPos1 = sobj.nextInt();

        System.out.println("Enter the second position: ");
        iPos2 = sobj.nextInt();

        bRet = CheckBit(iNo, iPos1, iPos2);

        if (bRet == true) 
        {
            System.out.println("Bit is ON at the given position");
        } 
        else 
        {
            System.out.println("Bit is OFF at the given position");
        }
    }
}