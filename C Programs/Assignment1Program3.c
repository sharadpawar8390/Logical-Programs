// 3) Program to print 5 to 1 numbers on screen

#include<stdio.h>

void Display()
{
    int i = 0;
    int iNo = 5;

    for(i = iNo;i>=1;i--)
    
    {
        printf("%d \n",i);
    }
}
int main()
{
    Display();
    
    return 0;
}