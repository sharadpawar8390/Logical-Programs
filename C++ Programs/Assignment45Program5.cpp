 /*
5) Write generic program to accept N values and reverse the contents.
Input : 10 20 30 10 30 40 10 40 10
Output : 10 40 10 40 30 10 30 20 10
*/

#include <iostream>

template<class T>
void ReverseArray(T values[], int size)
{
    for (int i = 0, j = size - 1; i < j; i++, --j)
    {
        
        T temp = values[i];
        values[i] = values[j];
        values[j] = temp;
    }
}

int main()
{
    int values[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int size = sizeof(values) / sizeof(values[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", values[i]);
    }
    printf("\n");

    ReverseArray(values, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", values[i]);
    }
    printf("\n");

    return 0;
}