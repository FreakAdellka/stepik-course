#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

 
int main(void) {
	setbuf(stdout,NULL);
	
	int k, x1, x2, x3, x4;
	scanf("%i %i %i %i %i", &k, &x1, &x2, &x3, &x4);
	
	
	printf("%i %i %i %i", (x1 + k) % 26, (x2 + k) % 26, (x3 + k) % 26, (x4 + k) % 26 );

	return 0;
}