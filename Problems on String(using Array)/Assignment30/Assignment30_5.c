/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-strcatX
//Input:-Array,String 
//Output:-void
//Date:-27 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :- Write a program which accept 2 strings from user and concat second string 
after first string. (Implement strcat() function). 

Input : “Marvellous Infosystems” 
        “Logic Building” 
Output : “Marvellous Infosystems Logic Building”*/

#include<stdio.h>


void strcatX(char arr[],char brr[])
{
	
	int i=0;
	int j=0;
	
	while(arr[i]!='\0')
	{
		i++;
	}
	
	while(brr[j]!='\0')
	{
		arr[i]=brr[j];
		j++;
		i++;
	}
}


int main()
{
	char arr[50]={'\0'};
	char brr[50]={'\0'};
	
	printf("Enter first String :");	
	scanf(" %[^'\n']s",&arr);
	
	printf("Enter Second String :");	
	scanf(" %[^'\n']s",&brr);
	
	
	strcatX(arr,brr);
	
	
	printf("%s",arr);
	
	
	
}
