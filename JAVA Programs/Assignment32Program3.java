/*
3) Write a java program which accept string from user and return 
difference between frequency of small characters and frequency 
of capital characters.

Input : “MarvellouS”

Output : 6  (8-2)

*/

class Assignment32Program3 
{
    public void countDiff(String str) 
    {
        int smallCount = 0;
        int capitalCount = 0;

        for (int i = 0; i < str.length(); i++) 
        {
            char ch = str.charAt(i);
            if (Character.isLowerCase(ch)) 
            {
                smallCount++;
            } 
            else if (Character.isUpperCase(ch)) 
            {
                capitalCount++;
            }
        }

        System.out.println("Frequency of small characters: " + smallCount);
        System.out.println("Frequency of capital characters: " + capitalCount);
    }

    public static void main(String[] args) 
    {
        Assignment32Program3  demo = new Assignment32Program3 ();
        String input = "MarvellouS";
        demo.countDiff(input);
    }
}