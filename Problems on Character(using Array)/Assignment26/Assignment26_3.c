/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Covert
//Input:-Integer 
//Output:-void
//Date:-23 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :-Accept character from user. If it is capital then display all the 
characters from the input characters till Z. If input character is small 
then print all the characters in reverse order till a. In other cases 
return directly. 

Input : Q 
Output : Q R S T U V W X Y Z 

Input : m 
Output : m l k j i h g f e d c b a 

Input : 8 
Output :
*/
#include<stdio.h>

void Convert(char value)
{
		int ch=value;
		int iCnt=0;
		
		if(ch>=65&&ch<=90)
		{  
	
			for(iCnt=ch;iCnt<=90;iCnt++)
			{
				printf("%c\t",iCnt);
			}
		}
		
		
		else if(ch>=97&&ch<=122)
		{
			
			
			for(iCnt=ch;iCnt>=97;iCnt--)
			{
			
				printf("%c\t",iCnt);
			}
		}
		
		else
		{
			printf("\t");
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
