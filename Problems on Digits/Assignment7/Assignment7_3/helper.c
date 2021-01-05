#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-ChkNumber
//Input:-Integer
//Output:-Integer
//Description:-Write a program which accept number from user and return the count of digits in 
//between 3 and 7. 
//Date:-7 August 2020
//////////////////////////////////////////////////////////////////////////////////

int ChkNumber(int iNo)
{	
	 int iDigit=0;
	 int iCnt=0;
	 
	 if(iNo<0){
		 iNo=-iNo;
	 }
	 while(iNo!=0){
		 
		 iDigit=iNo%10;
		 
		 if((iDigit>3)&&(iDigit<7)){
			 
			 iCnt++;
		 }		 
		 iNo=iNo/10;
	 }
		return iCnt;
}
