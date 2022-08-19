#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define pi 3.14159265358979323846

 
int main(void) {
	setbuf(stdout,NULL);
	
	int a, a1, a2, a3, a4;
	scanf("%i", &a);
	a4 = a / 1000;
//	printf("%i\n", a4);
	a3 = (a % 1000) / 100;
//	printf("%i\n", a3);
	a2 = (a % 100) / 10;
//	printf("%i\n", a2);
	a1 = a % 10;
//	printf("%i\n", a1);
	double x = (double)(a4*a2)/(double)(a3*a1);
	printf("%.2lf", x);
	
	return 0;
}