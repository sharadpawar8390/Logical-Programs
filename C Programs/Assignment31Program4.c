/*
4) Write a program which display smallest digits of all element from singly linear linked list.

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

void DisplaySmall(PNODE Head)
{
   PNODE current = Head;
  
   while(current != NULL)
   {
      int smallDigit = 9;
      int temp = current->Data;

      while(temp != 0)
      {
         int digit = temp % 10;

         if(digit < smallDigit)
         {
            smallDigit = digit;
         }
         temp = temp / 10;
      }
      printf("%d\t",smallDigit);
      current = current->Next;
   }  
   printf("\n");
}

int main()
{
   PNODE First = NULL;
  
   InsertFirst(&First,415);
   InsertFirst(&First,532);
   InsertFirst(&First,250);
   InsertFirst(&First,11);
       
   DisplaySmall(First);

   return 0;

}