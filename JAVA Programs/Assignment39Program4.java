/*
4) Write a program which accept one number and position from user and 
toggle that bit. Return modified number.

*/

import java.util.Scanner;

class Assignment39Program4
{
    public static int ToggleBitAtPosition(int iNo, int iPos) 
    {
        int iMask = 1 << (iPos - 1);
        return iNo ^ iMask;
    }     

    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner (System.in);

        System.out.println("Enter number: ");
        int iNo = sobj.nextInt();

        System.out.println("Enter position to toggle bit: ");
        int iPos = sobj.nextInt();

        int iRet = ToggleBitAtPosition(iNo, iPos);
        System.out.println("Modified number after toggling bit: "+iRet);
    }
}