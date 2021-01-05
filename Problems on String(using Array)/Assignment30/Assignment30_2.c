/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-CopyArray
//Input:-Integer 
//Output:-void
//Date:-27 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :-Write a program which accept string from user and copy the 
contents of that string into another string. (Implement strncpy() 
function) 

Input : “Marvellous Multi OS” 
 10 
Output : “Marvellous

Note : If third parameter is greater than the size of source string then 
copy whole string into destination.
*/

#include<stdio.h>


char brr[30];

void CopyArray(char arr[],int iNo)
{
	
	if(arr==NULL)
	{
		return;
	}
	
	
	int i=0;
	int iCnt=0;
	
	
	while(arr[i]!='\0')
	{
	
		i++;
	}
	i--;
	
	
	if(iNo<=i)
	{
		
		for(iCnt=0;iCnt<=iNo;iCnt++)
		{
			
			brr[iCnt]=arr[iCnt];
		}
		
	}
	
	else
	{
		
		while(arr[iCnt]!=0)
		{
			brr[iCnt]=arr[iCnt];
			
			iCnt++;
		}
		
	}
	
	
	printf("%s",brr);
	
}

int main()
{
	
	char arr[30];
	int iNo=0;
	
	printf("Enter the String :");
	scanf("%[^'\n']d",&arr);
	
	
	printf("Enter the Number :");
	scanf("%d",&iNo);
	
	CopyArray(arr,iNo);
		
return 0;

}
