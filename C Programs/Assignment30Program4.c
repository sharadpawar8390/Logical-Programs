/*
4) Write a program which returns second maximum element from singly linear linked list.

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

int SecMaximum(PNODE Head)
{
   PNODE temp = Head;
   int max = 0, secMax = 0;

   while(temp != NULL)
   {
      if(temp->Data > max)
         {
             secMax = max;
             max = temp->Data;
         }
       else if(temp->Data > secMax && temp->Data != max)
       {
           secMax = temp->Data;
       }
        temp = temp->Next;
   }
   return secMax;
}

int main()
{
   PNODE First = NULL;
   int iRet = 0;

   InsertFirst(&First,110);
   InsertFirst(&First,230);
   InsertFirst(&First,320);
   InsertFirst(&First,240);
    
   iRet = SecMaximum(First);

   printf("Second Maximum element in the linked list : %d\n",iRet);

   return 0;

}