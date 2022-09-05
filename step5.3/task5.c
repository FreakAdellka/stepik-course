#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

 
int main(void) {
	setbuf(stdout,NULL);
	
	int a,b,c,d;
	scanf("%1i%1i%1i%1i", &a, &b, &c, &d);
	double res = (d * pow(2,0))+(c * pow(2,1))+(b * pow(2,2))+(a * pow(2,3));
	printf("%.0lf", res);

	return 0;
}