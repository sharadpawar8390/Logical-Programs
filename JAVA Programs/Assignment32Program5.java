/*
5) Write a java program which accept string from user and display 
it in reverse order.

Input : “MarvellouS”

Output : “SuollevraM”

*/

class Assignment32Program5 
{
    public void reverse(String str) 
    {
        StringBuilder reversed = new StringBuilder(str).reverse();
        System.out.println("Output: " + reversed);
    }

    public static void main(String[] args) 
    {
        Assignment32Program5 demo = new Assignment32Program5();
        String input = "MarvellouS";
        demo.reverse(input);
    }
}