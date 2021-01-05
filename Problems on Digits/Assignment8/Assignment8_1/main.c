/* 
Problem Statement:-Write a program which accept number from user and if number is less than 50 
then print small,if it is greater than 50 and less than 100 then print medium, if it is 
greater than 100 then print large.
 
Input : 75 
Output : Medium

*/

#include"header.h"

int main()
{
	int iValue=0;
	
	printf("Enter the Number :");
	scanf("%d",&iValue);
	
	ChkNum(iValue);
	
	return 0;
 
}
	