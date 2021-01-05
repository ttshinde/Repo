#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-RevNum
//Input:-Integer
//Output:-BOOL
//Description:-Write a program which accept number from user and check whether it contains 0 
//in it or not. 
//Date:-6 August 2020
//////////////////////////////////////////////////////////////////////////////////

BOOL ChkZero(int iNo)
{	
	 int iDigit=0;
	 
	 while(iNo!=0){
		 
		 iDigit=iNo%10;
		 
		 if(iDigit==0){
			 
			 break;
		 }		 
		 iNo=iNo/10;
	 }
	 if(iDigit==0)
	 {
		 return TRUE;
	 }
	 
	 else{
		 

	 }
}
