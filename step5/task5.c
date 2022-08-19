#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define pi 3.14159265358979323846
#define m 3e-23

 
int main(void) {
	setbuf(stdout,NULL);
	
	int n;
	scanf("%i", &n);
	float water_mass = 249.5 * n;
	float dropp_amount = water_mass / 5e-2;
	float mol_amount = water_mass / m;
	printf("%.0f %.3e", dropp_amount, mol_amount);
	
	return 0;
}