/*
2) Write generic program to accept N values and count frequency of any specific 
value.
Input : 10 20 30 10 30 40 10 40 10
Value to check frequency : 10
Output : 4

*/

#include <iostream>

template<class T>
int CountFrequency(T values[], int size, T No)
{
    int frequency = 0;

    for (int i = 0; i < size; i++)
    {
        if (values[i] == No)
        {
            frequency++;
        }
    }

    return frequency;
}

int main()
{
    int values[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int size = sizeof(values) / sizeof(values[0]);
    int targetValue = 10;

    int frequency = CountFrequency(values, size, targetValue);

    printf("Frequency of %d : %d\n", targetValue, frequency);

    return 0;
}