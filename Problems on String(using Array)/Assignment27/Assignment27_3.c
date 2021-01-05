/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Difference
//Input:-Integer 
//Output:-Integer
//Date:-25 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :-Write a program which accept string from user and return 
difference between frequency of small characters and frequency of 
capital characters.
 
Input : “MarvellouS” 
Output : 6 (8-2)
*/
#include<stdio.h>

int Difference(char arr[])

{
	int iCnt=0;
	int iCount=0;
	int iFeq=0;
	
	while(arr[iCnt]!='\0')
	{
	
		if(arr[iCnt]>='A'&& arr[iCnt]<='Z')
		{
		
			iCount++;
		}
		
		
		if(arr[iCnt]>='a'&&arr[iCnt]<='z')
		{
			iFeq++;
		}
		
	  
	  iCnt++;
	
	}

	return iCount- iFeq;


}


int main()
{
	char ch[30];
	int iRet=0;
	printf("Enter the String :");
	
	scanf("%[^'\n']s",ch);
	
	iRet=Difference(ch);
	printf("Difference: %d",iRet);


}
