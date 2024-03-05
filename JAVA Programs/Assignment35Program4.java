/*
4) Write java program which accept N numbers from user and accept 
Range, Display all elements from that range
Input : N : 6
Start: 60
End : 90
Elements :85 66 3 76 93 88
Output : 66 76 88
Input : N : 6
Start: 30
End : 50
Elements :85 66 3 76 93 88
Output :

*/

import java.util.*;

class Assignment35Program4 
{
    public void Display(int Arr[], int iStart, int iEnd) 
    {
        System.out.println("Output:");

            for (int num : Arr) 
            {
            if (num >= iStart && num <= iEnd) 
            {
                System.out.print(num + " ");
            }
        }
        System.out.println(); 
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

        System.out.println("Enter the start of the range:");
        int startRange = scanner.nextInt();

        System.out.println("Enter the end of the range:");
        int endRange = scanner.nextInt();

        Assignment35Program4 numberObj = new Assignment35Program4();
        numberObj.Display(elements, startRange, endRange);
    }
}