/*
2) Accept character from user. if character is small display its corresponding capital character and if it small then display its corresponding capital. in other cases display as it is.

Input :  Q
          
Output : q

Input :  m
          
Output : M

Input :  4
          
Output : 4

Input :  %
          
Output : %

*/

 #include<stdio.h>

 void Display(char ch)
 {
    if(ch >= 'a' && ch <= 'z')
    {
      printf("%c\n",ch - ('a' - 'A'));
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
      printf("%c\n",ch + ('a' - 'A'));
    }
     else
    {
      printf("%c\n",ch);
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
