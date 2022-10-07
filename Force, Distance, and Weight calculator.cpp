#include <stdio.h>
int main(){
	
	int FM;
	int FA;
	
	printf ("Input mass (in kg): ");
	scanf ("%d", &FM);
	printf ("Input acceleration (in m/s^2): ");
	scanf ("%d", &FA);
	
	int Force = FM*FA;
	
	printf ("The force (in N) is %d \n", Force);
	
	int DS;
	int DT;
	
	printf ("Input speed (in mph): ");
	scanf ("%d", &DS);
	printf ("Input time (in hr): ");
	scanf ("%d", &DT);
	
	int Distance = DS*DT;
	
	printf ("The distance (in ft) is %d \n", Distance);
	
	int WM;
	int WGP;
	
	printf ("Input mass (in kg): ");
	scanf ("%d", &WM);
	printf ("Input gravitational pull (in m/s^2): ");
	scanf ("%d", &WGP);
	
	int Weight = WM*WGP;
	
	printf ("The weight (in N) is %d", Weight);
}
