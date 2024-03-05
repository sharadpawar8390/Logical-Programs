/*
4) Accept character from user and check whether it is small case or not (a-z)

Input : g

Output : True

Input : D

Output : False
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheakCapital(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character :");
    scanf("%c",&cValue);

    bRet = CheckCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Small case character");
    }
    else
    {
        printf("It is not a Small case character");
    }

    return 0;
}