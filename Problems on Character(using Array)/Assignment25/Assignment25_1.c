/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-ChkAlpha
//Input:-Integer 
//Output:-Bool
//Author:-Tanmay shinde
//Date:-22 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :- Accept Character from user and check whether it is alphabet or not 
(A-Z a-z). 

Input : F 
Output : TRUE
 
Input : & 
Output : FALSE
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int Bool;


Bool ChkAlpha(char value)
{
		int iCnt=0;
		int Ch=value;
		
		if(Ch>=65||Ch<=90)
		{
			
			for(iCnt=65;iCnt<=90;iCnt++)
			{
				if(Ch==iCnt)
				{
					return TRUE;
				}
			}
				return FALSE;
		}
		
		else if(Ch>=97||Ch<=122)
		{
			for(iCnt=97;iCnt<=122;iCnt++)
			{
				if(Ch==iCnt)
				{
					return TRUE;
				}
			}
				return FALSE;
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
	
	
	bRet=ChkAlpha(ch);
	
	if(bRet==TRUE)
	{
		printf("It is Alphabet ");
	}
	
	else
	{
		printf("It is not  Alphabet");
	}
	
}
