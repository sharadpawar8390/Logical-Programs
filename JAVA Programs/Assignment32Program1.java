/*
1) Write a Java program which accept string from user and count 
number of capital characters.

Input : “Marvellous Multi OS”

Output : 4

*/

class Assignment32Program1 
{

    public int countCapital(String str) 
    {
        int count = 0;

        for (int i = 0; i < str.length(); i++) 
        {
            char ch = str.charAt(i);
            if (Character.isUpperCase(ch)) 
            {
                count++;
            }
        }

        return count;
    }

    public static void main(String[] args) 
    {
        Assignment32Program1 demo = new Assignment32Program1();
        String input = "Marvellous Multi OS";
        int result = demo.countCapital(input);
        System.out.println("Number of capital characters: " + result);
    }
}