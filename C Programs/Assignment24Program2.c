/*
2) Accept character from user and check whether it is capital or not (A-Z)

Input : F

Output : True

Input : d

Output : False
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheakCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
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
        printf("It is a Capital character");
    }
    else
    {
        printf("It is not a Capital character");
    }

    return 0;
}