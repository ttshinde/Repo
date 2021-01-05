#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Fact
//Input:-Integer
//Output:-Integer
//Description:-Write a program to find factorial of given number 
//Date:-8 August 2020
//////////////////////////////////////////////////////////////////////////////////

int Fact(int iNo)
{	
		
	int iCnt=0;
	int iAns=1;
	
	if(iNo<0){
		
		iNo=-iNo;
	}
	
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		
		iAns=iAns*iCnt;
		
		
	}
	return iAns;


	
}
