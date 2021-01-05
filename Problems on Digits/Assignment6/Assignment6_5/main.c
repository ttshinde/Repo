/* 
Problem Statement:Write a program which accept number from user and count frequency of such a 
digits which are less than 6. 

Input : 2395 
Output : 3 

Input : 1018 
Output : 3 

Input : 9440 
Output : 3
 
Input : 96672 
Output : 1
*/

#include"header.h"

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the Number :");
	scanf("%d",&iValue);
	
	iRet=FeqSix(iValue);
	
	printf("Frequency of Number which is less than 6 is : %d\n ",iRet);
	
	return 0;
 
}
	