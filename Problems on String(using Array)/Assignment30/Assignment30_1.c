/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-CopyArray
//Input:-Integer 
//Output:-void
//Date:-27 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :-Write a program which accept string from user and copy the 
contents of that string into another string.(Implement strcpy() 
function) 

Input : “Marvellous Multi OS” 
Output : “Marvellous Multi OS” in another string
*/

#include<stdio.h>


char brr[30];

void CopyArray(char arr[])
{
	
	if(arr==NULL)
	{
		return;
	}
	
	
	int i=0;
	
	
	while(arr[i]!='\0')
	{
		brr[i]=arr[i];
		
		i++;
	}
	printf("%s",brr);


}

int main()
{
	
	char arr[30];
	
	printf("Enter the String :");
	scanf("%[^'\n']d",&arr);
	
	CopyArray(arr);
		
return 0;

}
