/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-LastOcc
//Input:-Integer 
//Output:-Integer
//Date:-27 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :-Write a program which accept string from user and accept one 
character. Return index of last occurrence of that character. 

Input : “Marvellous Multi OS” 
 M 
Output : 11 

Input : “Marvellous Multi OS” 
 W 
Output : -1 

Input : “Marvellous Multi OS” 
 e 
Output : 4
*/

#include<stdio.h>


int LastOcc(char arr[],char ch)
{
	
	int i=0;
	int iPos=-1;
	
	while(arr[i]!='\0')
	{
		if(arr[i]==ch)
		{
			iPos=i;
		}
		
		i++;
	}
		return iPos;
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

	
	iRet=LastOcc(arr,ch);
	
	printf("Last Occurance :%d",iRet);
		
return 0;

}
