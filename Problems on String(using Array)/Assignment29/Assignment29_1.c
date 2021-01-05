/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-CharPresent
//Input:-Integer 
//Output:-BOOL
//Date:-27 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :- Write a program which accept string from user and accept one 
character. Check whether that character is present in string or not. 

Input : “Marvellous Multi OS” 
 e 
Output : TRUE 

Input : “Marvellous Multi OS” 
 W 
Output : FALSE
*/

#include<stdio.h>
#define TRUE 0
#define FALSE 1
typedef int BOOL;

BOOL CharPresent(char arr[],char ch)
{
	
	int i=0;
	
	while(arr[i]!='\0')
	{
		if(arr[i]==ch)
		{
			return TRUE;
		}
		i++;
	}
	return FALSE;


	
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

	
	iRet=CharPresent(arr,ch);
	
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
