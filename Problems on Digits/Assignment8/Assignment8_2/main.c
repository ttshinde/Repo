/* 
Problem Statement:-2. Accept single digit number from user and print it into word. 

Input : 9 
Output : Nine
 
Input : -3 
Output : Three
 
Input : 12 
Output : Invalid Number
*/

#include"header.h"

int main()
{
	int iValue=0;
	
	printf("Enter the Number :");
	scanf("%d",&iValue);
	
	Convert(iValue);
	
	return 0;
 
}
	