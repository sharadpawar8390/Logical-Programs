/*
2) Write a program which accepts file name from user and count number of 
small characters from that file.

*/

#include <stdio.h>

int CountSmall(char FName[]) 
{
    FILE *fp;
    char ch;
    int count = 0;

    fp = fopen(FName, "r");

    if (fp == NULL) 
    {
        printf("File not found or unable to open.");
        return -1; 
    }

    while ((ch = fgetc(fp)) != EOF) 
    {
        if (ch >= 'a' && ch <= 'z') 
        {
            count++;
        }
    }

    fclose(fp);

    return count;
}

int main() {
    char FileName[30];
    int iRet = 0;

    printf("Enter file name: ");
    scanf("%s", FileName); 

    iRet = CountSmall(FileName);

    if (iRet != -1) 
    {
        printf("Number of small characters are %d", iRet);
    }

    return 0;
}