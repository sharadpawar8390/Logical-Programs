/*
5) Write a program which accept one number from user and range of 
positions from user. Toggle all bits from that range.
*/

import java.util.*;

class Assignment40Program5
{
    public  static int ToggleBitRange(int iNo, int iStart, int iEnd) 
    {
        int iMask = ((1 << (iEnd - iStart + 1)) - 1) << (iStart - 1);
        return iNo ^ iMask;
    }
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number: ");
        int iNo = sobj.nextInt();

        System.out.println("Enter starting position: ");
        int iStart = sobj.nextInt();

        System.out.println("Enter ending position: ");
        int iEnd = sobj.nextInt();

        int iRet = ToggleBitRange(iNo, iStart, iEnd);
        System.out.println("Result after toggling bits: " +iRet);
    }
}