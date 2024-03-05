/*
1) Write a program which accept one number from user and count number of 
ON (1) bits in it without using % and / operator.

*/

import java.util.*;

class Assignment40Program1
{
    public static int CountOne(int iNo) 
    {
        int count = 0;
        while (iNo != 0) 
        { 
            count += iNo & 1;
            
            iNo = iNo >>> 1;
        }
        return count;
    }
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner (System.in);
        int iNo = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        int iRet = CountOne(iNo);

        System.out.println("Number of ON bits: " +iRet);
    }
}