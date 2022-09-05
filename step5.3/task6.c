#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

 
int main(void) {
	setbuf(stdout,NULL);
	
	int k, a, b, c, d;
	scanf("%i %1i%1i%1i%1i", &k, &a, &b, &c, &d);
	double res = (d * pow(k,0))+(c * pow(k,1))+(b * pow(k,2))+(a * pow(k,3));
	printf("%.0lf", res);

	return 0;
}