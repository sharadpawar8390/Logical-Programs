/*
1) Write java program which accept N numbers from user and accept 
one another number as NO , check whether NO is present or not.
Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : TRUE
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : FALSE

*/

import java.util.*;

class Assignment35Program1 
{
    boolean Check(int Arr[], int iNo) 
    {
        for (int num : Arr) 
        {
            if (num == iNo) 
            {
                return true;
            }
        }
        return false;
    }

    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the value of N:");
        int N = scanner.nextInt();

        System.out.println("Enter the number to check:");
        int targetNumber = scanner.nextInt();

        int[] elements = new int[N];

        System.out.println("Enter the elements:");
        for (int i = 0; i < N; i++) 
        {
            elements[i] = scanner.nextInt();
        }

        Assignment35Program1 numberObj = new Assignment35Program1();
        boolean result = numberObj.Check(elements, targetNumber);

        System.out.println("Output: " + result);
    }
}