/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-InsertLast,Display,SumDigit
//Input:-Integer
//Output:-Integer
//Author:-Tanmay shinde
//Date:-13th September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:- Write a program which display addition of digits of element from singly 
linear linked list. 

Function Prototype :int SumDigit( PNODE Head); 

Input linked list : |110|->|230|->|20|->|240|->|640| 
Output : 2 5 2 6 10
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

void InsertLast(PPNODE Head,int iNo)
{
	PNODE newn=NULL;
	PNODE temp=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->Data=iNo;
	newn->Next=NULL;
	
	if(*Head==NULL)
	{
		*Head=newn;
	}
	else
	{
		temp=*Head;
		while(temp->Next!=NULL)
		{
			temp=temp->Next;
		}
		temp->Next=newn;
	}
}

void Display(PNODE Head)
{
	while(Head!=NULL)
	{
		printf("%d ",Head->Data);
		Head=Head->Next;
	}
	printf("\n");
}

int SumDigit(PNODE Head)
{ 	
	int iAns=0;
	int iDigit=0;
	
	while(Head!=NULL)
	{
		int iAns=0;
		
		while(Head->Data!=0)
		{
				iDigit=Head->Data%10;
				iAns=iAns+iDigit;
				Head->Data=Head->Data/10;
		}
			printf("%d  ",iAns);
			
		Head=Head->Next;
	}
	
}	
	
int main()
{
	int iValue1=0;
	int iValue2=0;
	int Choice=0;
	int i=0;
	int iRet=0;
	int Ch=1;
	
	PNODE First=NULL;
	
	while(Ch!=0)
	{
		printf("Enter Choice: \n 1.Insert Node\n 2.Display addition of digits of element \n 3.Display\n ");
		printf("-------------------------------------------------------------------------------------------\n");
		scanf("%d",&Choice);
	    printf("-------------------------------------------------------------------------------------------\n");
	
		switch(Choice)
		{	
	
			case 1:
			{
				printf("How many Node Wants to Add:");
				scanf("%d",&iValue1);
			
			
				for(i=1;i<=iValue1;i++)
				{
					printf("Enter Data :");
					scanf("%d",&iValue2);
			
					InsertLast(&First,iValue2);
				}
				break;
			
			}
			
		   case 2:
			{
				SumDigit(First);
         				
				break;
			}	
			
		  
		  case 3:
			{
				Display(First);
				printf("-------------------------------------------------------------------------------------------\n");
				break;
			}
			
		 default:
				printf("Wrong Choice: \n");
				printf("Do u want to continue: \n");
				printf("press 1-> Continue. OR press 0-> Stop\n");
				scanf("%d",&Ch);
		}
	}
		
	return 0;
	
}
