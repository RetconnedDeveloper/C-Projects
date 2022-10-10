#include<stdio.h>
int main(){

    int ChosenOperation;
	int FM;
	int FA;
    int DS;
	int DT;
	int WM;
    int WGP;
    int Answer;
    char* msg;
	
    printf ("Choose an operation");
    printf ("\n 1 = Calculate Force");
    printf ("\n 2 = Calculate Distance");
    printf ("\n 3 = Calculate Weight");
    printf ("\n Choose operation:");
    
    scanf ("%d", &ChosenOperation);
    
    if (ChosenOperation == 1){
    	
	    printf ("Input mass (in kg): ");
	    scanf ("%d", &FM);
	    printf ("Input acceleration (in m/s^2): ");
	    scanf ("%d", &FA);
	
	    Answer = FM*FA;
	    msg = "The force (in N) is";
        
	}
	
	else if (ChosenOperation == 2){
    	
    	
	
	    printf ("Input speed (in mph): ");
	    scanf ("%d", &DS);
      	printf ("Input time (in hr): ");
    	scanf ("%d", &DT);
	
    	Answer = DS*DT;
	   	msg = "The distance (in ft) is";
	   	
	}

    else if (ChosenOperation == 3){
    	
    	printf ("Input mass (in kg): ");
    	scanf ("%d", &WM);
    	printf ("Input gravitational pull (in m/s^2): ");
    	scanf ("%d", &WGP);
	
    	Answer = WM*WGP;
    	msg = "The weight (in N) is";
    	
	}
	
	else {
		
		msg = "Please use a valid input";
		
	} 
	
	printf ("%s %d", msg, Answer);

}
