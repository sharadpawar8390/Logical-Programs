/*
5) Write a program which accept one number from user and toggle contents 
of first and last nibble of the number. Return modified number. (Nibble is a 
group of four bits)
*/

import java.util.*;

class Assignment39Program5
{
    public static int ToggleNibbles(int iNo) 
    {   
        int firstNibbleMask = 0xF0000000;
        int lastNibbleMask = 0x0000000F;

        int firstNibble = (iNo & firstNibbleMask) >>> 28;
        int lastNibble = iNo & lastNibbleMask;

        int toggledFirstNibble = firstNibble ^ 0xF;
        int toggledLastNibble = lastNibble ^ 0xF;

        int clearedNumber = iNo & 0x0FFFFFFF;

        return clearedNumber | (toggledFirstNibble << 28) | toggledLastNibble;
    } 

    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner (System.in);

        System.out.println("Enter number: ");
        int iNo = sobj.nextInt();

        int iRet = ToggleNibbles(iNo);

        System.out.println("Modified number after toggling nibbles: "+iRet);
    }
}