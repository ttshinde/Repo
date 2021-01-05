#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-Difference 
//Input:-Integer
//Output:-Integer
//Description:-Write a program which accept number from user and return difference between 
//summation of even digits and summation of odd digits. 
//Date:-7 August 2020
//////////////////////////////////////////////////////////////////////////////////

int Difference(int iNo)
{	
	 int iDigit=0;
	 int iEven=0;
	 int iOdd=0;
	 
	 if(iNo==0){
		 
		 return 0;
	 }
	 
	 while(iNo!=0){
		 
		 iDigit=iNo%10;
		 
		 if(iDigit%2==0)
		 {
			iEven=iEven+iDigit;
		 }
		 else{
			 iOdd=iOdd+iDigit;
		 }
		 iNo=iNo/10;
	 }
		return (iEven-iOdd);
}
