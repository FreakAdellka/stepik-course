#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

 
int main(void) {
	setbuf(stdout,NULL);
	
	int k, n, m;
	scanf("%i %i %i", &k, &n, &m);
	printf("%i %i", n % k, m % k);

	return 0;
}