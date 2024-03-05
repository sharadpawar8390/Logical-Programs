/*
2) Write a program which displays all palindrome elements of singly linked list.

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

void DisplayPalindromes(PNODE Head)
{
   PNODE current = Head;
  
   while(current != NULL)
   {
      int reversedData = 0;
      int originalData = current->Data;
      int temp = originalData;

      while(temp != 0)
      {
         reversedData = reversedData * 10 + temp % 10;
         temp = temp / 10;
      }
      
      if(originalData == reversedData)
      {
         printf("%d\t",originalData);
      }
      current = current->Next;
   }
   printf("\n");
}

int main()
{
   PNODE First = NULL;
   
   InsertFirst(&First,89);
   InsertFirst(&First,6);
   InsertFirst(&First,414);
   InsertFirst(&First,17);
   InsertFirst(&First,28);
   InsertFirst(&First,11);
       
   DisplayPalindromes(First);

   return 0;

}