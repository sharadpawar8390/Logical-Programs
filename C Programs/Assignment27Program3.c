/*
3) Accept string from user and toggle the case.

Input :  "Marvellous Multi OS"
          

Output :  mARVELLOUS mULTI os

*/

 #include<stdio.h>
 #include<ctype.h>

 void strtogglex(char *str)
 {
   while(*str != '\0')
   {
      if(isupper(*str))
      {
         *str = tolower(*str);
      }
      else if(islower(*str))
      {
         *str = toupper(*str);
      }
      str++;
   }
 }

 int main()
 {
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    strtogglex(arr);

    printf("Modified string is %s",arr);
 
    return 0;
 }