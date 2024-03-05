/*
5) Accept string from user and accept one character.Reverse that string in place.

Input :   "abcd"
          

Output :  "dcba"

Input :   "abba"
          

Output :  "abba"


*/
 #include<stdio.h>
 #include<string.h>

 void StrRevX(char *str)
 {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while(start < end)
    {
      char temp = str[start];
      str[start] = str[end];
      str[end] = temp;

      start++;
      end--;
    }
 }
 
 int main()
 {
    char arr[20];
    
    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);
   
    printf("Modified string is %s",arr);
   
    return 0;
 }
