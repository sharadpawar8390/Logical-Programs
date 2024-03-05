/*
4) Accept character from user and check whether it is special symbol or not.(!,@,#,$,%,^,&,*)

Input :  %
          
Output :  TRUE

Input :  d

Output :  FALSE


*/

 #include<stdio.h>
 typedef int BOOL;
 #define TRUE 1
 #define FALSE 0

 BOOL ChkSpecial(char ch)
 {
    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*')
    {
      return TRUE;
    }
    else
    {
      return FALSE;
    }
 }

 int main()
 {
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter string : \n");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);
    if(bRet == TRUE)
    {
      printf("it is special character");
    }
    else
    {
      printf("it is not special character");
    }
 
    return 0;
 }