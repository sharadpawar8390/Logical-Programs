/*
3) Write generic program to accept N values and search first occurrence of any 
specific value.
Input : 10 20 30 10 30 40 10 40 10
Value to search : 40
Output : 6
*/

#include <iostream>

template<class T>
int FindFirstOccurrence(T values[], int size, T No)
{
    for (int i = 0; i < size; i++)
    {
        if (values[i] == No)
        {
            return i + 1; 
        }
    }

    return -1; 
}

int main()
{
    int values[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int size = sizeof(values) / sizeof(values[0]);
    int targetValue = 40;

    int position = FindFirstOccurrence(values, size, targetValue);

    if (position != -1)
    {
        printf("First occurrence of %d : %d\n", targetValue, position);
    }
    else
    {
        printf("%d not found in the array.\n", targetValue);
    }

    return 0;
}