/*
5) Write java program which accept N numbers from user and return 
product of all odd elements.
Input : N : 6
Elements :15 66 3 70 10 88
Output : 45
Input : N : 6
Elements :44 66 72 70 10 88
Output : 0
*/

import java.util.*;

class Assignment35Program5 
{
    public int Product(int Arr[]) 
    {
        int product = 1;

            for (int num : Arr) 
            {
            if (num % 2 != 0) 
            {
                product *= num;
            }
        }

        return product;
    }

    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the value of N:");
        int N = scanner.nextInt();

        int[] elements = new int[N];

        System.out.println("Enter the elements:");
        for (int i = 0; i < N; i++) 
        {
            elements[i] = scanner.nextInt();
        }

        Assignment35Program5 numberObj = new Assignment35Program5();
        int result = numberObj.Product(elements);

        System.out.println("Output: " + result);
    }
}