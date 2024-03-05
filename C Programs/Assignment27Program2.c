/*
2) Accept string from user and convert it into upper case.

Input :  "Marvellous Multi OS"
          

Output :  MARVELLOUS MULTI OS

*/

 #include<stdio.h>
 #include<ctype.h>

 void struprx(char *str)
 {
   while(*str != '\0')
   {
      *str = toupper(*str);
      str++;
   }
 }

 int main()
 {
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    struprx(arr);

    printf("Modified string is %s",arr);
 
    return 0;
 }