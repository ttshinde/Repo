/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-InsertLast,Display,DisplayLarge
//Input:-Integer
//Output:-Void
//Author:-Tanmay shinde
//Date:-13th September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:- Write a program which display largest digits of all element from singly 
linear linked list. 

Function Prototype : void DisplayLarge( PNODE Head); 

Input linked list : |11|->|250|->|532|->|419| 
Output : 1 5 5 9
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

void DisplayLarge(PNODE Head)
{ 	
	int iDigit=0;
	int temp=0;
	int iLarge=0;
	
	while(Head!=NULL)
	{
		
		temp=Head->Data;
		iLarge=0;
		
		while(temp!=0)
		{
				iDigit=temp%10;
				
				if(iDigit>iLarge)
				{
					iLarge=iDigit;
				}
				
				temp=temp/10;
		}

			printf("%d ",iLarge);
			
		Head=Head->Next;
	}
	printf("\n");
	printf("------------------------------------------------------------------------------------------\n");
	

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
		printf("Enter Choice: \n 1.Insert Node\n 2.Display Large \n 3.Display\n ");
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
				DisplayLarge(First);
         				
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
