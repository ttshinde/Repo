/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Toggle
//Input:-Integer 
//Output:-void
//Date:-27 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :-Write a program which accept string from user and toggle the case.
 
Input : “Marvellous Multi OS” 
Output : mARVELLOUS mULTI os
*/

#include<stdio.h>

void Toggle(char arr[])
{
	int i=0;
	
	
	while(arr[i]!='\0')
	{
	
			if((arr[i]>='A')&&(arr[i]<='Z'))
			{
		
				arr[i]=arr[i]+32;
				
			}
			
			
			else if((arr[i]>='a')&&(arr[i]<='z'))
			{
		
				arr[i]=arr[i]-32;
				
			}
			else
			{
				printf(" ");
			}
			
			i++;
			
    }
		printf("%s",arr);
	

	
	
}



int main()
{
	
	char arr[30];
	printf("Enter the String :");
	
	scanf("%[^'\n']s",&arr);
	
	
	Toggle(arr);
	
return 0;

}
