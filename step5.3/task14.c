#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define n0 7.5e10
 
int main(void) {
	setbuf(stdout,NULL);
	
	int k;
	scanf("%i", &k);
	double l = log(2) / 5570;
	double a = 0 - l;
	double n = n0 * exp(a * k);
	
	printf("%.2lf", n/1e9);

	return 0;
}