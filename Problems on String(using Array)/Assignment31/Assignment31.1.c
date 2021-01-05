
/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-ReverseArray
//Input:-String,Array
//Output:-void
//Date:-4 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :-  Write a program which accept string from user and copy that 
characters of that string into another string in reverse order. 

Input : “Marvellous Python” 
Output : “nohtyP suollevraM”
*/

#include<stdio.h>



void ReverseArray(char arr[],char brr[])
{
	
	if(arr==NULL)
	{
		return;
	}
		int i=0;
		int j=0;
		
	while(arr[i]!='\0')
	{
		
		i++;
	}
	i--;

	while(i>=0)
	{
		
		brr[j]=arr[i];
		
		j++;
		i--;
	}	
	
}




int main()
{
	char arr[50]={'\0'};
	char brr[50]={'\0'};
	
	printf("Enter the String :");	
	scanf("%[^'\n']s",&arr);
	
	ReverseArray(arr,brr);
	
    printf("%s",brr);

	
}
