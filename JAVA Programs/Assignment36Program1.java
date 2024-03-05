/*
1) Write a java program which accepts 2 strings from user and 
concat N characters of second string after first string.Value of N 
should be accepted from user.
Note : If third parameter is greater than the size of second string 
then concat whole string after first string.
Input : “Marvellous Infosystems”
“Logic Building”
5
Output : “Marvellous Infosystems Logic”

*/

import java.util.*;

class Assignment36Program1 
{
    public String StrNCatX(String src, String dest, int iCnt) 
    {
        if (iCnt >= dest.length()) 
        {
            return src + " " + dest;
        }
 
        String result = src + " " + dest.substring(0, iCnt);
        return result;
    }

    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the first string:");
        String firstString = scanner.nextLine();

        System.out.println("Enter the second string:");
        String secondString = scanner.nextLine();

        System.out.println("Enter the number of characters to concatenate from the second string:");
        int n = scanner.nextInt();

        Assignment36Program1 stringDemo = new Assignment36Program1();
        String result = stringDemo.StrNCatX(firstString, secondString, n);

        System.out.println("Output: \"" + result + "\"");
    }
}