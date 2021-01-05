#include"header.h"

//////////////////////////////////////////////////////////////////////////////////
//Function Name:-ChkNum 
//Input:-Integer
//Output:-Integer
//Description:-Write a program which accept number from user and if number is less than 50 
//then print small,if it is greater than 50 and less than 100 then print medium, if it is 
//greater than 100 then print large. 
//Date:-7 August 2020
//////////////////////////////////////////////////////////////////////////////////

int ChkNum(int iNo)
{	
	
	if(iNo<50){
		
		printf("Number is Small \n");
	}
	
	else if((iNo>=50)&&(iNo<100)){
		
		printf("Number is Medium\n");
		
	}
	
	else{
		
		printf("Number is large\n");
	}




	
}
