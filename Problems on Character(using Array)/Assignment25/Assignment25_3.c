/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-ChkDig
//Input:-Integer 
//Output:-Bool
//Date:-22 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :-Accept Character from user and check whether it is digit or not (0-9). 

Input : 7 
Output : TRUE
 
Input : d 
Output : FALSE
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int Bool;


Bool ChkDig(char value)
{
		int iCnt=0;
		int Ch=value;
		//printf("%d",Ch);
	
				if(Ch>=48&&Ch<=57)
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
	
	
	bRet=ChkDig(ch);
	
	if(bRet==TRUE)
	{
		printf("Integer");
	}
	
	else
	{
		printf("Character");
	}
	
	
	
	
}
