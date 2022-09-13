#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

 
int main(void) {
	setbuf(stdout,NULL);
	
	int n, k, x;
	scanf("%i %i %i", &n, &k, &x);
	printf("%i", (x + k) % n );

	return 0;
}