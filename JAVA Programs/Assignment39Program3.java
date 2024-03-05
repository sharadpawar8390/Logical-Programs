/*
3) Write a program which accept one number and position from user and on 
that bit. Return modified number.
*/

import java.util.*;

class Assignment39Program3
{
    public static int SetBitAtPosition(int iNo, int iPos) 
    {
        int iMask = 1 << (iPos - 1);
        return iNo | iMask;
    }

    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner (System.in);

        System.out.println("Enter number: ");
        int iNo = sobj.nextInt();

        System.out.println("Enter position to set bit: ");
        int iPos = sobj.nextInt();

        int iRet = SetBitAtPosition(iNo, iPos);
        System.out.println("Modified number after setting bit: "+iRet);
    }
}