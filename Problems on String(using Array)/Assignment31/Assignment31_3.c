
/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-CopyArray
//Input:-String,Array
//Output:-void
//Date:-4 September 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :- Write a program which accept string from user and copy that 
characters of that string into another string by converting all small 
characters into capital case. 

Input : “Marvellous Python 2” 
Output : “MARVELLOUS PYTHON 2”
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
		
	while(arr[i]!='\0')
	{

		if(arr[i]>='a'&&arr[i]<='z')
		{
			arr[i]=arr[i]-32;
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
	
	CopyArray(arr,brr);
	
    printf("%s",brr);

	
};
