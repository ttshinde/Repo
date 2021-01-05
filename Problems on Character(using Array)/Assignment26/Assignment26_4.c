/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-ChkChar
//Input:-Integer 
//Output:-Bool
//Date:-23 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :- Accept Character from user and check whether it is special symbol 
or not (!, @, #, $, %, ^, &, *,(,),). 

Input : % 
Output : TRUE 

Input : d 
Output : FALSE
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int Bool;


Bool ChkChar(char value)
{
		int iCnt=0;
		int Ch=value;
		//printf("%d",Ch);
	
				if(Ch>=33&&Ch<=47)
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
	
	
	bRet=ChkChar(ch);
	
	if(bRet==TRUE)
	{
		printf("TRUE");
	}
	
	else
	{
		printf("FALSE");
	}
	
	
	
	
}
