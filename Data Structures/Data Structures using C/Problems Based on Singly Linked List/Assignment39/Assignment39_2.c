/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-SearchLastOcc
//Input:-Integer
//Output:-Integer
//Author:-Tanmay shinde
//Date:-12th September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:-Write a program which search first occurrence of particular element from 
singly linear linked list.
 
Function should return position at which element is found. 

Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70| 
Input element : 30 
Output : 6
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


void InsertLast(PPNODE Head,int No)
{
	PNODE newn=NULL;
	PNODE temp=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->Data=No;
	newn->Next=NULL;
	
	if(*Head==NULL)
	{
		*Head=newn;
	}
	else
	{
		temp=*Head;
		while(temp!=NULL)
		{
			temp=temp->Next;
		}
		temp->Next=newn;
	}	
	
}

int SearchLastOcc(PNODE Head , int No )
{
	int i=0;
	int iAns=0;
	
	while(Head!=NULL)
	{
       i++;
	   
		if(Head->Data==No)
		{

			iAns=i;
		}
	   Head=Head->Next;
	}
		return iAns;
}

int main()
{
	int iRet=0;
	int j=0;
	
	PNODE First=NULL;
	
	InsertLast(&First,11);
	InsertLast(&First,21);
	InsertLast(&First,51);
	InsertLast(&First,21);
	
	printf("Enter the Number to Search ");
	scanf("%d",&j);
	
	iRet=SearchLastOcc(First,j);
	
	printf("%d",iRet);
	
return 0;
	
}
