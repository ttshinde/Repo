/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-DisplayDigit
//Input:-Integer 
//Output:-void
//Date:-27 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :- Write a program which accept string from user and display only 
digits from that string. 

Input : “marve89llous121” 
Output : 89121 

Input : “Demo” 
Output :
*/

#include<stdio.h>

void DisplayDigit(char arr[])
{
	int i=0;
	
	
	while(arr[i]!='\0')
	{
	
			if((arr[i]>='0')&&(arr[i]<='9'))
			{
		
			   printf("%c",arr[i]);
				
			}
			
			else
			{
				printf("");
			}
			
			i++;
			
    }
		
	

	
	
}



int main()
{
	
	char arr[30];
	printf("Enter the String :");
	
	scanf("%[^'\n']d",&arr);
	
	
	DisplayDigit(arr);
	
return 0;

}
