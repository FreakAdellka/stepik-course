#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

 
int main(void) {
	setbuf(stdout,NULL);
	
	int x;
	scanf("%i", &x);
	double a = (double)x / 7;
	printf("%.0lf", ceil(a));

	return 0;
}