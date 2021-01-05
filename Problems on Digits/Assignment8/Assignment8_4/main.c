/* 
Problem Statement:-Write a program which accept number from user and display its table. 

Input : 2  
Output : 2 4 6 8 10 12 14 16 18 20 

Input : 5 
Output : 5 10 15 20 25 30 35 40 45 50
 
Input : -5 
Output : 5 10 15 20 25 30 35 40 45 50
*/

#include"header.h"

int main()
{
	int iValue=0;
	
	printf("Enter the Number :");
	scanf("%d",&iValue);
	
	Table(iValue);

	
	return 0;
 
}
	