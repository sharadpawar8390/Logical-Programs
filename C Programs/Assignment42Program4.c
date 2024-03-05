/*
4) Write a program which accepts file name and one character from user and 
count number of occurrences of that characters from that file.
*/

#include <stdio.h>

int CountChar(char FName[], char Ch) 
{
    FILE *fp;
    char fileChar;
    int count = 0;

    fp = fopen(FName, "r");

    if (fp == NULL) 
    {
        printf("File not found or unable to open.");
        return -1; 
    }

    while ((fileChar = fgetc(fp)) != EOF) 
    {
        if (fileChar == Ch) 
        {
            count++;
        }
    }

    fclose(fp);

    return count;
}

int main() 
{
    char FileName[30];
    int iRet = 0;
    char cValue;

    printf("Enter file name: ");
    scanf("%s", FileName); 

    printf("Enter the character: ");
    scanf(" %c", &cValue); 

    iRet = CountChar(FileName, cValue);

    if (iRet != -1) 
    {
        printf("Frequency of %c is %d", cValue, iRet);
    }

    return 0;
}