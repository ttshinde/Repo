#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-ChkZero
//Input:-Integer
//Output:-Integer
//Description:-Write a program which accept number from user and count frequency of 4 in it.
//Date:-6 August 2020
//////////////////////////////////////////////////////////////////////////////////

int ChkFour(int iNo)
{	
	 int iDigit=0;
	 int iCnt=0;
	 
	 if(iNo<0){
		 iNo=-iNo;
	 }
	 while(iNo!=0){
		 
		 iDigit=iNo%10;
		 
		 if(iDigit==4){
			 
			 iCnt++;
		 }		 
		 iNo=iNo/10;
	 }
		return iCnt;
}
