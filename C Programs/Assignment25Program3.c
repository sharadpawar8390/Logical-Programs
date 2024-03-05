/*
3) Accept character from user. if character is capital display all character from input character till Z. if input character is small then print all character in reverse order till a.in other cases return directly.

Input :  Q
          
Output : Q R S T U V W X Y Z

Input :  m
          
Output : m l k j i h g f e d c b a

Input :  8
          
Output : 

*/

 #include<stdio.h>

 void Display(char ch)
 {
    if(ch >= 'A' && ch <= 'Z')
    {
      for(char c = ch; c <= 'Z'; c++);
      {
      printf("%c",ch);
      }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
      for(char c = ch; c >= 'a'; c--);
      {
      printf("%c",ch);
      }
    }
     else
    {
      printf("\n");
    }
 }

 int main()
 {
    char cValue = '\0';
    
    printf("Enter character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
 }
