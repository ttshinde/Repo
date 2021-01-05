/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-CountCapital
//Input:-Integer 
//Output:-Integer
//Date:-25 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :-Write a program which accept string from user and count number of 
capital characters.
 
Input : “Marvellous Multi OS” 
Output : 4

*/
#include<stdio.h>

int CountCapital(char arr[])

{
	int iCnt=0;
	int iCount=0;
	
	while(arr[iCnt]!='\0')
	{
	
		if(arr[iCnt]>='A'&& arr[iCnt]<='Z')
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
	
	iRet=CountCapital(ch);
	printf("Number of Capital Characters are: %d",iRet);


}
