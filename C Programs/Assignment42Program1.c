/*
1) Write a program which accepts file name from user and count number of 
capital characters from that file.

*/

#include <stdio.h>

int CountCapital(char FName[]) 
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
        if (ch >= 'A' && ch <= 'Z') 
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

    iRet = CountCapital(FileName);

    if (iRet != -1) 
    {
        printf("Number of capital characters are %d", iRet);
    }

    return 0;
}