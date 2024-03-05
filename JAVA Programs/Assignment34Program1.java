/* 1)
Write a java program which accept number from user and return the count of even digits.
*/

import java.util.*;

class Assignment34Program1
{
    public static void CountEven(int iNo)
    {
        int iDigit = 0;
        int iCnt = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) == 0)
            {
                iCnt++;
            }
            iNo = iNo / 10;
        }
        System.out.println("Even count is : "+iCnt);

    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number :");
        iValue = sobj.nextInt();

        CountEven(iValue);
        
        sobj.close();

    }
}