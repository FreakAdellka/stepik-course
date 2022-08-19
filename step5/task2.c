#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define pi 3.14159265358979323846

 
int main(void) {
	setbuf(stdout,NULL);
	
	double h, r;
	scanf("%lf %lf", &r, &h);
	double v_c = h * pi * pow(r, 2);
	double v_k = (h * pi * pow(r, 2))/3;
	printf("%.2lf %.2lf", v_c, v_k);
	
	return 0;
}