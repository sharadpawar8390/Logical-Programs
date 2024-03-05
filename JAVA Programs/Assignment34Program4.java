/* 4)
Write a java program which accept number from user and return the multiplication of all digits.
*/

import java.util.*;

class Assignment34Program4
{
    public static void Multiply(int iNo)
    {
        int iDigit = 0;
        int iMulti = 1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            iMulti = iMulti * iDigit;
        }
        System.out.println("Multiplication is : "+iMulti);

    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number :");
        iValue = sobj.nextInt();

        Multiply(iValue);
        
        sobj.close();

    }
}