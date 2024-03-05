/*
1) Accept string from user and convert it into lower case.

Input :  "Marvellous Multi OS"
          

Output :  marvellous multi os

*/

 #include<stdio.h>
 #include<ctype.h>

 void strlwrx(char *str)
 {
   while(*str != '\0')
   {
      *str = tolower(*str);
      str++;
   }
 }

 int main()
 {
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

   
    printf("Modified string is %s",arr);
 
    return 0;
 }
