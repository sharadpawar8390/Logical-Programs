/*
2) Write a program which displays all elements which are prime from singly linear linked list.

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

int IsPrime(int num)
{
   if(num <= 1)
   return FALSE;

   for(int i = 2; i * i <= num; i++)
   {
      if(num % i == 0)
      return FALSE;
   }
   return TRUE;
}
int DisplayPrime(PNODE Head)
{
   PNODE temp = Head;
  
   printf("Prime Numbers in the linked list : ");
   while(temp != NULL)
   {
     if(IsPrime(temp->Data))
     printf("%d\t",temp->Data);
          
     temp = temp->Next;
   }
   return TRUE;
}

int main()
{
   PNODE First = NULL;

   InsertFirst(&First,89);
   InsertFirst(&First,22);
   InsertFirst(&First,41);
   InsertFirst(&First,17);
   InsertFirst(&First,20);
   InsertFirst(&First,11);
   
   DisplayPrime(First);

   return 0;

}