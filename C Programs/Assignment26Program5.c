/*
5) Accept string from user and display it in reverse order.

Input :  "MarvellouS"
          
Output :  "SuollevraM"

*/

 #include<stdio.h>
 #include<string.h>

 void Reverse(char *str)
 {
    int length = strlen(str);
    for(int i = length - 1; i >= 0; i--)
    {
      printf("%c",str[i]);
    }
    printf("\n");
 }

 int main()
 {
    char arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
 }