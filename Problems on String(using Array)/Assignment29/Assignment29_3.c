/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-FirstOcc
//Input:-Integer 
//Output:-Integer
//Date:-27 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :- Write a program which accept string from user and accept one 
character. Return index of first occurrence of that character. 

Input : “Marvelous Multi OS” 
 M 
Output : 0

Input : “Marvelous Multi OS” 
 W 
Output : -1 

Input : “Marvelous Multi OS” 
 e 
Output : 4
*/

#include<stdio.h>


int FirstOcc(char arr[],char ch)
{
	
	int i=0;
	
	while(arr[i]!='\0')
	{
		if(arr[i]==ch)
		{
			return i;
		}
		
		i++;
	}
		return -1;
}

int main()
{
	
	char arr[30];
	char ch='\0';
	int iRet=0;
	
	printf("Enter the String :");
	scanf("%[^'\n']d",&arr);
	
	printf("Enter the Character to find:");
	scanf(" %c",&ch);

	
	iRet=FirstOcc(arr,ch);
	
	printf("First Occurance :%d",iRet);
		
return 0;

}
