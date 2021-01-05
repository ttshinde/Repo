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

int Convert(int iNo)
{	
	if(iNo<0){
	
     	printf("Enter Positive Number...");
	}
	switch(iNo){
		
		case 0:
			printf("Zero");
			break;
			
		case 1:
			printf("One");
				break;
			
		case 2:
			printf("Two");
				break;
			
		case 3:
			printf("Three");
				break;
			
		case 4:
			printf("Four");
				break;
			
		case 5:
			printf("Five");
				break;
			
		case 6:
			printf("Six");
				break;
			
		case 7:
			printf("Seven");
				break;
		case 8:
			printf("Eight");
				break;
		case 9:
			printf("Nine");
				break;
		default:
			printf("Invaid Number");
			
		
		
	}



	
}
