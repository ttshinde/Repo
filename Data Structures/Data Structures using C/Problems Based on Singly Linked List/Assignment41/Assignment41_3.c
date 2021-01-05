/*
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-InsertLast,Display,DisplayProduct
//Input:-Integer
//Output:-Void
//Author:-Tanmay shinde
//Date:-13th September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement:-Write a program which display product of all digits of all element from 
singly linear linked list. (Don’t consider 0) 

Function Prototype :void DisplayProduct( PNODE Head); 

Input linked list : |11|->|20|->|32|->|41| 
Output : 1 2 6 4

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

void DisplayProduct(PNODE Head)
{ 	
	int iAns=1;
	int iDigit=0;
	int temp=0;
	
	while(Head!=NULL)
	{
		int iAns=1;
		
		temp=Head->Data;
		
		while(temp!=0)
		{
				iDigit=temp%10;
				if(iDigit!=0)
				{
					iAns=iAns*iDigit;
				}
				
				temp=temp/10;
		}

			printf("%d ",iAns);
			
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
		printf("Enter Choice: \n 1.Insert Node\n 2.Display Product of Each Number \n 3.Display\n ");
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
				DisplayProduct(First);
         				
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
