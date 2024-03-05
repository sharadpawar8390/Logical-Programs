/*
2) Write a program which accept two numbers from user and display position 
of common ON bits from that two numbers.

*/

import java.util.*;

class Assignment40Program2
{
    public static void CommonBits(int iNo1, int iNo2) 
    {
        int commonBits = iNo1 & iNo2;
        int iPos = 1;
        while (commonBits != 0) 
        {
            if ((commonBits & 1) == 1) 
            {
                System.out.print(iPos + " ");
            }
           
            commonBits = commonBits >>> 1;
            iPos++;
        }
    }
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner (System.in);
        int iNo1 = 0;
        int iNo2 = 0;

        System.out.println("Enter number : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter number : ");
        iNo2 = sobj.nextInt();

        System.out.print("ON bits are : ");

        CommonBits(iNo1, iNo2);  
    }
}