/*
4) Accept sing from user and reverse the contents of that string 
by toggling the case.
Input : “aCBdef”
Output : “FEDcbA”

*/

import java.util.*;

class Assignment36Program4 
{
    public String StrRevTogX(String str) 
    {
        StringBuilder reversed = new StringBuilder();

            for (int i = str.length() - 1; i >= 0; i--) 
            {
            char currentChar = str.charAt(i);
            if (Character.isUpperCase(currentChar)) 
            {
                reversed.append(Character.toLowerCase(currentChar));
            } 
            else 
            {
                reversed.append(Character.toUpperCase(currentChar));
            }
        }

        return reversed.toString();
    }

    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the string:");
        String inputString = scanner.nextLine();

        Assignment36Program4 stringDemo = new Assignment36Program4();
        String result = stringDemo.StrRevTogX(inputString);

        System.out.println("Output: \"" + result + "\"");
    }
}