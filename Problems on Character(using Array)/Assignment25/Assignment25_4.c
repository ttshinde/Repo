/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-ChkSmall
//Input:-Integer 
//Output:-Bool
//Date:-22 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :-Accept Character from user and check whether 
it is small case or not (a-z).
 
Input : g 
Output : TRUE
 
Input : D 
Output : FALSE
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int Bool;


Bool ChkSmall(char value)
{
		int iCnt=0;
		int Ch=value;
		//printf("%d",Ch);
	
				if(Ch>=97&&Ch<=122)
				{
					return TRUE;
				}
				
				else
				{
						
					return FALSE;
				}	
		
}





int main()
{
	char ch='\0';
	
	Bool bRet=FALSE;
	
	printf("Enter the Character :");
	scanf("%c",&ch);
	
	
	bRet=ChkSmall(ch);
	
	if(bRet==TRUE)
	{
		printf("It is Small Character");
	}
	
	else
	{
		printf("It is not Small Character");
	}
	
	
	
	
}
