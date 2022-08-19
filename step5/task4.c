#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define pi 3.14159265358979323846

 
int main(void) {
	setbuf(stdout,NULL);
	
	int r1, r2;//r2>r1
	scanf("%i %i", &r1, &r2);
	int ring_l = r2 - r1;
	double s = pi*(pow(r2,2)-pow(r1,2));
	printf("%i %.2lf", ring_l, s*100);
	
	
	return 0;
}