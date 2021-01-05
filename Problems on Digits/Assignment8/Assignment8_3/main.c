/* 
Problem Statement:-Write a program to find factorial of given number. 

Input : 5 
Output : 120 (5 * 4 * 3 * 2 * 1)
 
Input : -5 
Output : 120 (5 * 4 * 3 * 2 * 1)
 
Input : 4 
Output : 24 (4 * 3 * 2 * 1)
*/

#include"header.h"

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the Number :");
	scanf("%d",&iValue);
	
	iRet=Fact(iValue);
	
	printf("%d\n",iRet);
	
	return 0;
 
}
	