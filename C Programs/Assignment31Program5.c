/*
5) Write a program which display largest digits of all element from singly linear linked list.

*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

struct node
{
   int Data;
   struct node *Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
   PNODE newn = NULL;
   newn = (PNODE)malloc(sizeof(NODE));

   newn->Next = NULL;
   newn->Data = no;

   if(*Head == NULL)
   {
      *Head = newn;
   }
   else
   {
      newn->Next = *Head;
      *Head = newn;
   }
}

void DisplayLarge(PNODE Head)
{
   PNODE current = Head;
  
   while(current != NULL)
   {
      int largestDigit = 0;
      int temp = current->Data;

      while(temp != 0)
      {
         int digit = temp % 10;

         if(digit > largestDigit)
         {
            largestDigit = digit;
         }
         temp = temp / 10;
      }
      printf("%d\t",largestDigit);
      current = current->Next;
   }  
   printf("\n");
}

int main()
{
   PNODE First = NULL;
  
   InsertFirst(&First,419);
   InsertFirst(&First,532);
   InsertFirst(&First,250);
   InsertFirst(&First,11);
       
   DisplayLarge(First);

   return 0;

}