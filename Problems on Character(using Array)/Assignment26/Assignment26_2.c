/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-ChkSmall
//Input:-Integer 
//Output:-void
//Date:-22 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :-Accept character from user. If character is small display its 
corresponding capital character, and if it small then display its 
corresponding capital. In other cases display as it is.
 
Input : Q 
Output : q
 
Input : m 
Output : M 

Input : 4 
Output : 4 
 
Input : % 
Output : %
*/
#include<stdio.h>

void Convert(char value)
{
		int ch=value;
		
		if(ch>=65&&ch<=90)
		{
			printf("%c",ch+32);
			
		}
		
		
		else if(ch>=97&&ch<=122)
		{
			printf("%c",ch-32);
			
		}
		
		else
		{
			printf("%c",ch);
		}
		
		
}


int main()
{
	char ch='\0';
	
	int iRet=0;
	
	printf("Enter the Character :");
	scanf("%c",&ch);
	
	
	Convert(ch);
	
}
