
/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-SearchFirstOcc
//Input:-Integer
//Output:-Integer
//Author:-Tanmay shinde
//Date:-7th September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:-Write a program which search first occurrence of particular element from 
singly linear linked list.
 
Function should return position at which element is found. 

Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70| 
Input element : 30 
Output : 3
*/

#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int Data;
	struct Node*Next;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;


void InsertFirst(PPNODE Head,int No)
{
	PNODE newn=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->Data=No;
	newn->Next=NULL;
	
	if(*Head==NULL)
	{
		*Head=newn;
	}
	else
	{
		newn->Next=*Head;
		*Head=newn;
	}
	
}

int SearchFirstOcc(PNODE Head , int No )
{
	int i=0;

	while(Head!=NULL)
	{
       i++;
	   
		if(Head->Data==No)
		{

			break;
		}
	   Head=Head->Next;
	}
		return i;
}

int main()
{
	int iRet=0;
	int j=0;
	
	PNODE First=NULL;
	
	InsertFirst(&First,11);
	InsertFirst(&First,21);
	InsertFirst(&First,51);
	InsertFirst(&First,21);
	
	printf("Enter the Number to Search ");
	scanf("%d",&j);
	
	iRet=SearchFirstOcc(First,j);
	
	printf("%d",iRet);
	
}
