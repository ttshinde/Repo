
/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-CopyArray
//Input:-String,Array
//Output:-void
//Date:-4 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :-Write a program which accept string from user and copy that 
characters of that string into another string by removing all white 
spaces. 

Input : “Marvel lous Pyth on” 
Output : “MarvellousPython”
*/

#include<stdio.h>



void CopyArray(char arr[],char brr[])
{
		if(arr==NULL)
		{
			return;
		}
		
		int i=0;
		int j=0;
		
	while(arr[j]!='\0')
	{

		if(arr[j]!=' ')
		{
			brr[i]=arr[j];
			i++;
		}
	
	  j++;
	
	}
			
}




int main()
{
	char arr[50]={'\0'};
	char brr[50]={'\0'};
	
	printf("Enter the String :");	
	scanf("%[^'\n']s",&arr);
	
	CopyArray(arr,brr);
	
    printf("%s",brr);

	
}
