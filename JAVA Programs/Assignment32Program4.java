/*
4) Write a java program which accept string from user and check 
whether it contains vowels in it or not.
Input : “marvellous”
Output : TRUE
Input : “Demo”
Output : TRUE
Input : “xyz”
Output : FALSE

*/

class Assignment32Program4 
{
    public boolean chkVowel(String str) 
    {
        for (int i = 0; i < str.length(); i++) 
        {
            char ch = Character.toLowerCase(str.charAt(i));
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            {
                return true;
            }
        }
        return false;
    }

    public static void main(String[] args) 
    {
        Assignment32Program4 demo = new Assignment32Program4();

        String input1 = "marvellous";
        System.out.println("Output for '" + input1 + "': " + demo.chkVowel(input1));

        String input2 = "Demo";
        System.out.println("Output for '" + input2 + "': " + demo.chkVowel(input2));

        String input3 = "xyz";
        System.out.println("Output for '" + input3 + "': " + demo.chkVowel(input3));
    }
}