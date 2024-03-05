/*
2) Write a java program which accept string from user and count 
number of small characters.

Input : “Marvellous”

Output : 9

*/

class Assignment32Program2 
{
    public int countSmall(String str) 
    {
        int count = 0;

        for (int i = 0; i < str.length(); i++) 
        {
            char ch = str.charAt(i);
            if (Character.isLowerCase(ch)) 
            {
                count++;
            }
        }

        return count;
    }

    public static void main(String[] args) 
    {
        Assignment32Program2  demo = new Assignment32Program2 ();
        String input = "Marvellous";
        int result = demo.countSmall(input);
        System.out.println("Number of small characters: " + result);
    }
}