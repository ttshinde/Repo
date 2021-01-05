#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-MulNum
//Input:-Integer
//Output:-Integer
//Description:-Write a program which accept number from user and return multiplication of all digits.  
//Date:-7 August 2020
//////////////////////////////////////////////////////////////////////////////////

int MulNum(int iNo)
{	
	 int iDigit=0;
	 int iAns=1;
	 
	 if(iNo==0){
		 
		 return 0;
	 }
	 
	 while(iNo!=0){
		 
		 iDigit=iNo%10;
		 
		 if(iDigit!=0)
		 {
			iAns=iAns*iDigit;
		 }
		 iNo=iNo/10;
	 }
		return iAns;
}
