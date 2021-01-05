/* 
Problem Statement:Write a program which accept number from user and count frequency of 2 in it.
 
Input : 2395 
Output : 0 

Input : 1018 
Output : 0
 
Input : 9440 
Output : 2 

Input : 922432 
Output : 1
				
*/

#include"header.h"

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the Number :");
	scanf("%d",&iValue);
	
	iRet=ChkTwo(iValue);
	
	printf("Frequency of 2 is : %d\n ",iRe);
	
	return 0;
 
}
	