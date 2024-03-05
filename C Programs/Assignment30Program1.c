/*
1) Write a program which displays all elements which are perfect from singly linear linked list.

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

int DisplayPerfect(PNODE Head)
{
   PNODE temp = Head;
   int sum = 0, i = 0;

   while(temp != NULL)
   {
      sum = 0;
      
      for(i = 1; i <= (temp->Data)/2; i++)
      {
         if(temp->Data % i == 0)
         sum = sum + i;
      }
         if(sum == temp->Data && temp->Data != 1)
         printf("%d\t",temp->Data);
         temp = temp->Next;
   }
   return TRUE;
}

int main()
{
   PNODE First = NULL;

   InsertFirst(&First,11);
   InsertFirst(&First,28);
   InsertFirst(&First,17);
   InsertFirst(&First,41);
   InsertFirst(&First,6);
   InsertFirst(&First,89);
 
   printf("Perfect Numbers in the linked list : \n");
   DisplayPerfect(First);

   return 0;

}