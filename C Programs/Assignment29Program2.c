/*
2) Write a program which search last occurance of particular element from singly linear linked list.
function should return position at which element is found.

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

int SearchLastOcc(PNODE Head,int no)
{
   int position = 0;
   int lastPosition = -1;

   while(Head != NULL)
   {
      position++;

      if(Head->Data == no)
      {
         lastPosition = position;
      }
      Head = Head->Next;
   }
   return lastPosition;
}

int main()
{
   PNODE First = NULL;
   int iRet = 0;

   InsertFirst(&First,70);
   InsertFirst(&First,30);
   InsertFirst(&First,50);
   InsertFirst(&First,40);
   InsertFirst(&First,30);
   InsertFirst(&First,20);
   InsertFirst(&First,10);

   iRet = SearchLastOcc(First, 30);

   if(iRet != -1)
   {
      printf("Output : %d\n",iRet);
   }
   else
   {
      printf("Output : Element not found\n");
   }

   return 0;

}