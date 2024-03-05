/*
4) Write generic program to accept N values and search last occurrence of any 
specific value.
Input : 10 20 30 10 30 40 10 40 10
Value to search : 40
Output : 8
*/

#include <iostream>

template<class T>
int FindLastOccurrence(T values[], int size, T No)
{
    int lastOccurrence = -1;

    for (int i = 0; i < size; i++)
    {
        if (values[i] == No)
        {
            lastOccurrence = i + 1; 
        }
    }

    return lastOccurrence;
}

int main()
{
    int values[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int size = sizeof(values) / sizeof(values[0]);
    int targetValue = 40;

    int position = FindLastOccurrence(values, size, targetValue);

    if (position != -1)
    {
        printf("Last occurrence of %d : %d\n", targetValue, position);
    }
    else
    {
        printf("%d not found in the array.\n", targetValue);
    }

    return 0;
}