/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-CharFreq
//Input:-Integer 
//Output:-Integer
//Date:-27 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :- Write a program which accept string from user and accept one 
character. Return frequency of that character. 

Input : “Marvellous Multi OS” 
 M 
Output : 2 

Input : “Marvellous Multi OS” 
 W 
Output : 0
*/

#include<stdio.h>


int CharFreq(char arr[],char ch)
{
	
	int i=0;
	int iCnt=0;
	
	while(arr[i]!='\0')
	{
		if(arr[i]==ch)
		{
			iCnt++;
		}
		i++;
	}
	return iCnt;


	
}



int main()
{
	
	char arr[30];
	char ch='\0';
	int iRet=0;
	
	printf("Enter the String :");
	scanf("%[^'\n']d",&arr);
	
	printf("Enter the Character to find:");
	scanf(" %c",&ch);

	
	iRet=CharFreq(arr,ch);
	
	printf("Frequency is :%d",iRet);
		
return 0;

}
