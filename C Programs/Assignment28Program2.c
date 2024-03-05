/*
2) Accept string from user and accept one character.Return frequency of that character.

Input :  "Marvellous Multi OS"
          M

Output :  2

Input :  "Marvellous Multi OS"
          W

Output :  0

*/
 #include<stdio.h>

 int CountChar(char *str, char ch)
 {
    int frequency = 0;

    while(*str != '\0')
    {
      if(*str == ch)
      {
         frequency++;
      }
      str++;
    }
    return frequency;
 }
 
 int main()
 {
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character :\n");
    scanf("%c\n",&cValue);

    iRet = CountChar(arr,cValue);

   
    printf("Character frequency is %d\n",iRet);
   
    return 0;
 }
