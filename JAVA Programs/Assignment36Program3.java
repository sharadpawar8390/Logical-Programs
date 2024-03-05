/*
3) Write a program which 2 strings from user and check whether 
first N contents of two strings are equal or not.
Note : If third parameter is greater than the size of second string 
then concat whole string after first string.
Input : “Marvellous Infosystems”
“Marvellous Logic Building”
10
Output : TRUE

*/

import java.util.*;

class Assignment36Program3 
{
    public boolean StrNCmpX(String src, String dest, int iCnt) 
    {
        if (iCnt >= dest.length()) 
        {
            return src.equals(dest);
        }
 
        return src.regionMatches(0, dest, 0, iCnt);
    }

    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the first string:");
        String firstString = scanner.nextLine();

        System.out.println("Enter the second string:");
        String secondString = scanner.nextLine();

        System.out.println("Enter the number of characters to compare from the beginning:");
        int n = scanner.nextInt();

        Assignment36Program3 stringDemo = new Assignment36Program3();
        boolean result = stringDemo.StrNCmpX(firstString, secondString, n);

        System.out.println("Output: " + result);
    }
}