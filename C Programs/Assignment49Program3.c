//3) Write a recursive program which accept string from user and count number of characters

#include<stdio.h>

int StrLenR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
        {
            iCnt++;
        }
        str++;
        StrLenR(str);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char Arr[20];

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    iRet = StrLenR(Arr);
    printf("Length of string is : %d",iRet);

    return 0;
}