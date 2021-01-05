/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-ConvertUpper
//Input:-Integer 
//Output:-void
//Date:-27 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :-.Write a program which accept string from user and convert it into 
upper case. 

Input : “Marvellous Multi OS” 
Output : MARVELLOUS MULTI OS
*/

#include<stdio.h>




void ConvertLower(char arr[])
{
	int i=0;
	
	
	while(arr[i]!='\0')
	{
	
			if((arr[i]>='a')&&(arr[i]<='z'))
			{
		
				arr[i]=arr[i]-32;
				
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
	
	
	ConvertLower(arr);
	
return 0;

}
