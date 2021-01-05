/*  
//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Reverse
//Input:-Integer 
//Output:-void
//Date:-27 August 2020
//////////////////////////////////////////////////////////////////////////////////

Problem Statement :-Write a program which accept string from user reverse that string 
in place. 

Input : “abcd” 
Output : “dcba” 

Input : “abba” 
Output : “abba”
*/

#include<stdio.h>


void Reverse(char arr[])
{
	int iTemp=0;
	int iStart=0;
	int iEnd=0;
	
	while(arr[iEnd]!='\0')
	{
		
		iEnd++;
	}
	
	iEnd--;

while(iStart<iEnd)
{
	iTemp=arr[iStart];
	arr[iStart]=arr[iEnd];
	arr[iEnd]=iTemp;
	
	iStart++;
	iEnd--;
}
printf("%s",arr);



}

int main()
{
	
	char arr[30];
	
	printf("Enter the String :");
	scanf("%[^'\n']d",&arr);
	
	Reverse(arr);
		
return 0;

}
