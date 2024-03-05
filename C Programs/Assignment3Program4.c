//4) Accept one character from user and convert case of that character

#include<stdio.h>

float DisplayConvert(char CValue)
{
    char ch = '\0';
    
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c is upper case",CValue);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("%c is lower case",CValue);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    return 0;
}
