//1) Write a recursive program which accept string from user and count white spaces.



#include<stdio.h>

int WhiteSpace(char *str)
{
    static int iCnt = 0;

    if(str[iCnt] != '\0')
    {
        if(str[iCnt] == ' ' )
        {
            iCnt++;
        }
        str++;
        WhiteSpace(str);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char Arr[20];

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    iRet = WhiteSpace(Arr);
    printf("Whitespaces of string is : %d",iRet);

    return 0;
}