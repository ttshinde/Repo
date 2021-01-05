#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-RevNum
//Input:-Integer
//Output:-Void
//Description:-Write a program which accept number from user and display its digits in reverse order.
//Date:-6 August 2020
//////////////////////////////////////////////////////////////////////////////////

void RevNum(int iNo)
{	
	 int iDigit=0;
	 
	 while(iNo!=0){
		 
		 iDigit=iNo%10;
		 printf("%d\n",iDigit);
		 
		 iNo=iNo/10;
	 }
}
