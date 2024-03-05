/*
5) Write a program which return smallest element from singly linear linked list.

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

int Minimum(PNODE Head)
{

   if(Head == NULL)
   {
      printf("Linked List is empty\n");
      return -1;
   }
   int min = Head->Data;

   while(Head != NULL)
   {

      if(Head->Data < min)
      {
         min = Head->Data;
      }
      Head = Head->Next;
   }
   return min;
}

int main()
{
   PNODE First = NULL;
   int iRet = 0;

   InsertFirst(&First,640);
   InsertFirst(&First,240);
   InsertFirst(&First,20);
   InsertFirst(&First,230);
   InsertFirst(&First,110);

   iRet = Minimum(First);

   printf("Output : %d\n",iRet);

   return 0;

}