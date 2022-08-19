#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define pi 3.14159265358979323846

 
int main(void) {
	setbuf(stdout,NULL);
	
	int k; 
	scanf("%i", &k);
	int hours  = k / 3600;
	int mins = (k/60) %60;
	printf("%i %i", hours, mins);
	
	return 0;
}