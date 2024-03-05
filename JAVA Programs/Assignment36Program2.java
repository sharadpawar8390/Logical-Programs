/*
2) Write a program which 2 strings from user and check whether 
contents of two strings are equal or not.
Input : “Marvellous Infosystems”
“Marvellous Infosystems”
Output : TRUE

*/

import java.util.*;

class Assignment36Program2 
{
    public boolean StrCmpX(String src, String dest) 
    {
        return src.equals(dest);
    }

    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the first string:");
        String firstString = scanner.nextLine();

        System.out.println("Enter the second string:");
        String secondString = scanner.nextLine();

        Assignment36Program2 stringDemo = new Assignment36Program2();
        boolean result = stringDemo.StrCmpX(firstString, secondString);

        System.out.println("Output: " + result);
    }
}