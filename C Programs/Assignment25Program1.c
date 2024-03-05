/*
1) write program which displays ASCII table.table contains symbol,Decimal,Hexadecimal and octal representation of every member from 0 to 255. 


*/

 #include<stdio.h>

 void DisplayASCII()
 {
   printf("| Symbol | Decimal | Hexadecimal | Octal |\n");
   printf("| ------ | ------- | ----------- | ----- |\n");

   for(int i = 0; i <= 255; ++i)
   {
    printf("| %c | %3d | %02X | %03o |\n",i,i,i,i);
   }
 }

 int main()
 {
    
    DisplayASCII();
   
    return 0;
 }
