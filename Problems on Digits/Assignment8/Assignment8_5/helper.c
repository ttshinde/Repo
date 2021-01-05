#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-RevTable
//Input:-Integer
//Output:-Void
//Description:-Write a program which accept number from user and display its table in reverse order. 
//Date:-8 August 2020
//////////////////////////////////////////////////////////////////////////////////

void RevTable(int iNo)
{	
	int iCnt=0;
	
	if(iNo<0){
		
		iNo=-iNo;	
	}
	
	for(iCnt=10;iCnt>=1;iCnt--){
		
		
		printf("%d\n",iNo*iCnt);
	}


	
}
