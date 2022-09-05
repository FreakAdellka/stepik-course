#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

 
int main(void) {
	setbuf(stdout,NULL);
	
	int m;
	scanf("%i", &m);
	double mass = (m * 454);
	
	
	printf("%.2lf", mass/1000);

	return 0;
}