/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Reverse
//Input:-Integer 
//Output:-void
//Date:-25 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :- Write a program which accept string from user and display it inn 
reverse order. 

Input : “MarvellouS” 
Output : “SuollevraM”
*/
#include<stdio.h>

void Reverse(char arr[])

{
	int i=0;
	int j=0;
	int iCnt=0;

	while(arr[i]!='\0')
	{
		iCnt++;
		i++;
	}
	
	for(j=iCnt;j>=0;j--)
	{
		printf("%c",arr[j]);
	}
	
}


int main()
{
	char ch[30];
	
	printf("Enter the String :");
	
	scanf("%[^'\n']s",ch);
	
	Reverse(ch);
	
	
}
