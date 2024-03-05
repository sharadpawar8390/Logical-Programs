/*
2) Write java program which accept N numbers from user and accept 
one another number as NO , return index of first occurrence of that 
NO.
Input : N : 6
NO: 66
Elements :85 66 3 66 93 88
Output : 1
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111
Output : -1
*/

import java.util.*;

class Assignment35Program2 
{
    public int FirstOcc(int Arr[], int iNo) 
    {
        for (int i = 0; i < Arr.length; i++) 
        {
            if (Arr[i] == iNo) 
            {
                return i;
            }
        }
     
        return -1;
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

        Assignment35Program2 numberObj = new Assignment35Program2();
        int result = numberObj.FirstOcc(elements, targetNumber);

        System.out.println("Output: " + result);
    }
}