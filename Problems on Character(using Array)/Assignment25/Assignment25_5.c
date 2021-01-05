/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-ChkDiv
//Input:-Integer 
//Output:-void
//Date:-22 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :- Accept division of student from user and depends on the division 
display exam timing. There are 4 divisions in school as A,B,C,D. Exam 
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. 
(Application should be case insensitive)
 
Input : C 
Output : Your exam at 9.20 AM
 
Input : d 
Output : Your exam at 10.30 AM
*/

#include<stdio.h>

void ChkDiv(char ch)
{
			
			switch(ch)
			{
				
				case 'A':
				case 'a':
				{
					printf("Your Exam is at 7AM");
					break;
				}
				
				case 'B':
				case 'b':
				{
					printf("Your Exam is at 8:30AM");
					break;
				}
				case 'C':
				case 'c':
				{
					printf("Your Exam is at 9:20AM");
					break;
				}
				case 'D':
				case 'd':
				{
					printf("Your Exam is at 10:30AM");
					break;
				}
				
				default:
				{
					printf("Enter Valid Divison");
					break;
				}
				
			}
		
}





int main()
{
	char ch='\0';
	
	
	printf("Enter the Character :");
	scanf("%c",&ch);
	
	
	ChkDiv(ch);
	
	
	
	
	
}
