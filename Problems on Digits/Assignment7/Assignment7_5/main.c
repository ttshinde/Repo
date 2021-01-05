/* 
Problem Statement:-Write a program which accept number from user and return difference between 
summation of even digits and summation of odd digits.
 
Input : 2395 
Output : -15 (2 - 17)
 
Input : 1018 
Output : 6 (8 - 2)
 
Input : 8440 
Output : 16 (16 - 0)
 
Input : 5733 
Output : -18 (0 - 18)

*/

#include"header.h"

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the Number :");
	scanf("%d",&iValue);
	
	iRet=Difference(iValue);
	
	printf("Difference: %d\n ",iRet);
	
	return 0;
 
}
	