/*
3) Write a program which returns addition of all even elements from singly linear linked list.

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
int AdditionEven(PNODE Head)
{
   PNODE temp = Head;
   int sum = 0;
  
   while(temp != NULL)
   {
     if(IsPrime(temp->Data) && temp->Data % 2 == 0)
     sum = (sum + temp)->Data;
          
     temp = temp->Next;
   }
   return sum;
}

int main()
{
   PNODE First = NULL;
   int iRet = 0;

   InsertFirst(&First,11);
   InsertFirst(&First,20);
   InsertFirst(&First,32);
   InsertFirst(&First,41);
   
   iRet = AdditionEven(First);

   printf("Sum of even prime numbers in the linked list : %d\n",iRet);

   return 0;

}