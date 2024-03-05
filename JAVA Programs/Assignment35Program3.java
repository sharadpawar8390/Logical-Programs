/*
3) Write java program which accept N numbers from user and accept 
one another number as NO , return index of last occurrence of that NO.
Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : 3
Input : N : 6
NO: 93
Elements :85 66 3 66 93 88
Output : 4
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : -1

*/

import java.util.*;

class Assignment35Program3 
{
    public int LastOcc(int Arr[], int iNo) 
    {
        int lastIndex = -1;

        for (int i = 0; i < Arr.length; i++) 
        {
            if (Arr[i] == iNo) 
            {
                lastIndex = i;
            }
        }
        return lastIndex;
    }

    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the value of N:");
        int N = scanner.nextInt();

        System.out.println("Enter the number to find:");
        int targetNumber = scanner.nextInt();

        int[] elements = new int[N];

        System.out.println("Enter the elements:");
        for (int i = 0; i < N; i++) 
        {
            elements[i] = scanner.nextInt();
        }

        Assignment35Program3 numberObj = new Assignment35Program3();
        int result = numberObj.LastOcc(elements, targetNumber);

        System.out.println("Output: " + result);
    }
}