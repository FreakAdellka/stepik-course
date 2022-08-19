#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define pi 3.14159265358979323846

 
int main(void) {
	setbuf(stdout,NULL);
	
	int n, m;
	scanf("%i %i", &m, &n);
	int res1 = (m/n)%10;
	double res2 = (int)(((double)m/(double)n)*10)%10;
	printf("%i %.0lf", res1, res2);
	return 0;
}