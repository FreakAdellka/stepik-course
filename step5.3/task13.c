#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define ro 1.29
#define z 0.000125
 
int main(void) {
	setbuf(stdout,NULL);
	
	int h;
	scanf("%i", &h);
	double a = 0-(double)h;
	double p = ro * exp(a*z);
	
	printf("%.2lf", p);

	return 0;
}