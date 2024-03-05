/*
3) Accept string from user and accept one character.Return index of first occurence of that character.

Input :  "Marvellous Multi OS"
          M

Output :  0

Input :  "Marvellous Multi OS"
          W

Output :  -1

Input :  "Marvellous Multi OS"
          e

Output :  4

*/
 #include<stdio.h>

 int FirstChar(char *str, char ch)
 {
    int index = -1;
    int i = 0;
    while(str[i] != '\0')
    {
      if(str[i] == ch)
      {
         index = i;
         break;
      }
      i++;
    }
    return index;
 }
 
 int main()
 {
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : \n");
    scanf("%c\n",&cValue);

    iRet = FirstChar(arr,cValue);

   
    printf("Character location is %d\n",iRet);
   
    return 0;
 }
