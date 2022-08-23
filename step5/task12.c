#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define pi 3.14159265358979323846

 double fact(int n){
	 return (n < 2) ? 1 : n * fact(n - 1);
 }
int main(void) {
	setbuf(stdout,NULL);
	double e1 = 1 + (1/fact(1)) + (1/fact(2)) + (1/fact(3));
	double e2 = 1 + (1/fact(1)) + (1/fact(2)) + (1/fact(3)) + (1/fact(4));
	double e3 = 1 + (1/fact(1)) + (1/fact(2)) + (1/fact(3)) + (1/fact(4)) + (1/fact(5));
	printf("%.5lf\n%.5lf\n%.5lf\n", e1, e2, e3);
	
	
	
	return 0;
}