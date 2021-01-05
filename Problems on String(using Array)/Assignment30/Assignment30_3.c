/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-CopyArray
//Input:-Integer 
//Output:-void
//Date:-27 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :-Write a program which accept string from user and copy capital 
characters of that string into another string. 

Input : “Marvellous Multi OS” 
Output : “MMOS”
*/

#include<stdio.h>


char brr[30];

void CopyArray(char arr[])
{
	
	if(arr==NULL)
	{
		return;
	}
	
	int j=0;
	int i=0;
	int iCnt=0;
	
	
	while(arr[i]!='\0')
	{
		
		if((arr[i]>='A')&&(arr[i]<='Z'))
		{
			
			brr[j]=arr[i];
			j++;
		}
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
