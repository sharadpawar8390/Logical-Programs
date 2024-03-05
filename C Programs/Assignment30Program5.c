/*
5) Write a program which displays addition of digits of element from singly linear linked list.

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

int SumDigit(int num)
{
   int sum = 0;

   while(num != 0)
   {
      sum = (sum + num) % 10;
      num = num / 10;
   }
   return sum;
}

int SumDigitList(PNODE Head)
{
   PNODE temp = Head;

   printf("Sum of digits in thelinked list : ");
   while(temp != NULL)
   {
      printf("%d\t",SumDigit(temp->Data));
      temp = temp->Next;
   }
   return TRUE;
}
int main()
{
   PNODE First = NULL;

   InsertFirst(&First,640);
   InsertFirst(&First,240);
   InsertFirst(&First,20);
   InsertFirst(&First,230);
   InsertFirst(&First,110);
    
   SumDigitList(First);

   return 0;

}