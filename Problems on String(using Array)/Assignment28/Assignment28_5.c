/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-WhiteSpaces
//Input:-Integer 
//Output:-void
//Date:-27 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :- Write a program which accept string from user and count number of 
white spaces 

Input : “MarvellouS” 
Output : 0 

Input : “MarvellouS Infosystems” 
Output : 1 

Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar” 
Output : 5
*/

#include<stdio.h>

int WhiteSpaces(char arr[])
{
	int i=0;
	int iCnt=0;
	
	while(arr[i]!='\0')
	{
	
			if(arr[i]==' ')
			{
				iCnt++;
			   				
			}
			
			i++;
			
    }
			return iCnt;
	
}



int main()
{
	
	char arr[30];
	int iRet=0;
	
	printf("Enter the String :");
	scanf("%[^'\n']d",&arr);
	
	iRet=WhiteSpaces(arr);
	
	printf(" Count :%d",iRet);
	
return 0;

}
