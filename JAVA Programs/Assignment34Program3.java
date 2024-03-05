/* 3)
Write a java program which accept number from user and return the count of odd digits in between 3 and 7.
*/

import java.util.*;

class Assignment34Program3
{
    public static void CountRange(int iNo)
    {
        int iDigit = 0;
        int iCnt = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit > 3) && (iDigit < 7))
            {
                iCnt++;
            }
            iNo = iNo / 10;
        }
        System.out.println("Range count is : "+iCnt);

    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number :");
        iValue = sobj.nextInt();

        CountRange(iValue);
        
        sobj.close();

    }
}