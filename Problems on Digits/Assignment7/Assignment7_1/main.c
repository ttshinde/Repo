/* 
Problem Statement:-Write a program which accept number from user and return the count of even 
digits. 

Input : 2395 
Output : 1
 
Input : 1018 
Output : 2 

Input : -1018 
Output : 2
 
Input : 8462 
Output : 4
 
*/

#include"header.h"

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the Number :");
	scanf("%d",&iValue);
	
	iRet=EvenCount(iValue);
	
	printf("Count of Even Number is : %d\n ",iRet);
	
	return 0;
 
}
	