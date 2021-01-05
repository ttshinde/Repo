/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-CountSmall
//Input:-Integer 
//Output:-Integer
//Date:-25 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :- Write a program which accept string from user and count number of 
small characters.
 
Input : “Marvellous” 
Output : 9
*/
#include<stdio.h>

int CountSmall(char arr[])

{
	int iCnt=0;
	int iCount=0;
	
	while(arr[iCnt]!='\0')
	{
	
		if(arr[iCnt]>='a'&& arr[iCnt]<='z')
		{
		
			iCount++;
		}
		
			iCnt++;
	
	}
	return iCount;


}


int main()
{
	char ch[30];
	int iRet=0;
	printf("Enter the String :");
	
	scanf("%[^'\n']s",ch);
	
	iRet=CountSmall(ch);
	printf("Number of Capital Characters are: %d",iRet);


}
