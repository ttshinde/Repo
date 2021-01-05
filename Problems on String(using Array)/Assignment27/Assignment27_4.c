/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Vowels
//Input:-Integer 
//Output:-Integer
//Date:-25 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :- Write a program which accept string from user and check whether 
it contains vowels in it or not.
 
Input : “marvellous” 
Output : TRUE
 
Input : “Demo” 
Output : TRUE 

Input : “xyz” 
Output : FALSE
*/
#include<stdio.h>
#define TRUE 2
#define FALSE 1

int Vowels(char arr[])

{
	int iCnt=0;
	
	while(arr[iCnt]!='\0')
	{
		if((arr[iCnt]=='A')||(arr[iCnt]=='E')||(arr[iCnt]=='I')||(arr[iCnt]=='O')||(arr[iCnt]=='U')||(arr[iCnt]=='a')||(arr[iCnt]=='e')||(arr[iCnt]=='i')||(arr[iCnt]=='o')||(arr[iCnt]=='u'))
		{
		
			return TRUE;
		}
		
		iCnt++;
		
	}
	

	
}


int main()
{
	char ch[30];
	int iRet=0;
	printf("Enter the String :");
	
	scanf("%[^'\n']s",ch);
	
	iRet=Vowels(ch);
	
	if(iRet==TRUE)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}

	return 0;
}
