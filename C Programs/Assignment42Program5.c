 /*
5) Write a program which accepts file name and one count from user and read 
that number of characters from starting position.
*/

#include <stdio.h>

void DisplayN(char FName[], int iSize) 
{
    FILE *fp;
    char buffer[iSize + 1]; 

    fp = fopen(FName, "r");

    if (fp == NULL) 
    {
        printf("File not found or unable to open.");
        return;
    }

    fread(buffer, 1, iSize, fp);
    
    buffer[iSize] = '\0';

    printf("Displaying first %d characters from %s:\n%s\n", iSize, FName, buffer);

    fclose(fp);
}

int main() 
{
    char FileName[30];
    int iValue = 0;

    printf("Enter file name: ");
    scanf("%s", FileName); 

    printf("Enter the number of characters: ");
    scanf("%d", &iValue);

    DisplayN(FileName, iValue);

    return 0;
}