/*
3) Write a program which display product of all digits of all element from singly linear linked list(Dont consider 0).

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

void DisplayProduct(PNODE Head)
{
   PNODE current = Head;
  
   while(current != NULL)
   {
      int product = 1;
      int temp = current->Data;

      while(temp != 0)
      {
         int digit = temp % 10;

         if(digit != 0)
         {
            product = product * digit;
         }
         temp = temp / 10;
      }
      printf("%d\t",product);
      current = current->Next;
   }  
   printf("\n");
}

int main()
{
   PNODE First = NULL;
  
   InsertFirst(&First,41);
   InsertFirst(&First,32);
   InsertFirst(&First,20);
   InsertFirst(&First,11);
       
   DisplayProduct(First);

   return 0;

}