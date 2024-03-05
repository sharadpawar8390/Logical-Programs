/*
5) Write a program which accept one number from user and on its first 4 
bits. Return modified number.
*/

import java.util.*;

class Assignment38Program5
{
    public static int SetFirst4Bits(int iNo) 
    {
        int iMask = 0xF0000000;
     
        return iNo | iMask;
    } 
    
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner (System.in);

        System.out.println("Enter number: ");
        int iNo = sobj.nextInt();

        int iRet = SetFirst4Bits(iNo);
        System.out.println("Modified number after setting first 4 bits: "+iRet);
    }
}