#include <stdio.h>

int main(){
	
	int CO;
	int AN1;
	int AN2;
	int SN1;
	int SN2;
	int MN1;
	int MN2;
	int DN1;
	int DN2;
	
	printf ("Hello! Please pick an operation.");
	printf ("\n 1 = Addition");
	printf ("\n 2 = Subtraction");
	printf ("\n 3 = Multiplication");
	printf ("\n 4 = Division");
	printf ("\n Chosen operation: ");
	scanf ("%d", &CO);
	
	if (CO == 1){
		
		printf ("Input the first number: ");
		scanf ("%d", &AN1);
		printf ("Input the second number: ");
		scanf ("%d", &AN2);
		
		int AA = AN1 + AN2;
		
		printf ("The answer is %d", AA);
		
	}
	
	else if (CO == 2){
		
		printf ("Input the first number: ");
		scanf ("%d", &SN1);
		printf ("Input the second number: ");
		scanf ("%d", &SN2);
		
		int SA = SN1 - SN2;
		
		printf ("The answer is %d", SA);
		
	}
	
	else if (CO == 3){
		
		printf ("Input the first number: ");
		scanf ("%d", &MN1);
		printf ("Input the second number: ");
		scanf ("%d", &MN2);
		
		int MA = MN1 * MN2;
		
		printf ("The answer is %d", MA);
		
	}
	
	else if (CO == 4){
		
		printf ("Input the first number: ");
		scanf ("%d", &DN1);
		printf ("Input the second number: ");
		scanf ("%d", &DN2);
		
		int DA = DN1 / DN2;
		
		printf ("The answer is %d", DA);
		
	}
	
	else {
		
		printf ("Please choose a valid input");
		
	}
	
}
