/* 
Problem Statement :-Write a program which accept number from user and check whether it contains 0 
in it or not. 

Input : 2395 
Output : There is no Zero
 
Input : 1018 
Output : It Contains Zero
 
Input : 9000 
Output : It Contains Zero
 
Input : 10687 
Output : It Contains Zero
				
*/

#include"header.h"

int main()
{
	int iValue=0;
	BOOL bRet=FALSE;
	
	printf("Enter the Number :");
	scanf("%d",&iValue);
	
	bRet=ChkZero(iValue);
	
	if(bRet==TRUE){
		
		printf("Number contains 0");
	}
			
	else{
		
		printf("Number do no conatin zero");
	}
	return 0;
 
}
	