#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

 
int main(void) {
	setbuf(stdout,NULL);
	
	int n,m;
	scanf("%i %i", &n, &m);
	int res = n % m;
	printf("%.0lf", res);

	return 0;
}