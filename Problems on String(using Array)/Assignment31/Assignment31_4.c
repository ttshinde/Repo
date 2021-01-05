
/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Convert
//Input:-String,Array
//Output:-void
//Date:-4 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :- Write a program which accept string from user and copy that 
characters of that string into another string by converting all capital 
characters into small case. 

Input : “Marvellous Python 2” 
Output : “marvellous python 2”
*/

#include<stdio.h>



void Convert(char arr[],char brr[])
{
		if(arr==NULL)
		{
			return;
		}
		
		int i=0;
		int j=0;
		
	while(arr[i]!='\0')
	{

		if(arr[i]>='A'&&arr[i]<='Z')
		{
			arr[i]=arr[i]+32;
		}
		brr[i]=arr[i];
		
	   i++;
	
	}
			
}




int main()
{
	char arr[50]={'\0'};
	char brr[50]={'\0'};
	
	printf("Enter the String :");	
	scanf("%[^'\n']s",&arr);
	
	Convert(arr,brr);
	
    printf("%s",brr);

	
};
