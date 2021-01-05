#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-OddCount
//Input:-Integer
//Output:-Integer
//Description:-Write a program which accept number from user and return the count of Odd
//digits. 
//Date:-6 August 2020
//////////////////////////////////////////////////////////////////////////////////

int OddCount(int iNo)
{	
	 int iDigit=0;
	 int iCnt=0;
	 
	 if(iNo<0){
		 iNo=-iNo;
	 }
	 while(iNo!=0){
		 
		 iDigit=iNo%10;
		 
		 if(iDigit%2!=0){
			 
			 iCnt++;
		 }		 
		 iNo=iNo/10;
	 }
		return iCnt;
}
