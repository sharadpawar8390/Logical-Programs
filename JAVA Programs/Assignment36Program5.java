/*
5) Accept string from user and check whether the string is 
palindrome or not without considering its case.
Input : “1abccBA1”
Output : TRUE
*/

import java.util.*;

class Assignment36Program5 
{
    public boolean StrPalindrome(String str) 
    {
        String lowerCaseStr = str.toLowerCase();
 
        String cleanStr = lowerCaseStr.replaceAll("[^a-zA-Z0-9]", "");

        StringBuilder reversed = new StringBuilder(cleanStr).reverse();
        return cleanStr.equals(reversed.toString());
    }

    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the string:");
        String inputString = scanner.nextLine();

        Assignment36Program5 stringDemo = new Assignment36Program5();
        boolean result = stringDemo.StrPalindrome(inputString);

        System.out.println("Output: " + result);
    }
}