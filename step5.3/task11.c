#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

 
int main(void) {
	setbuf(stdout,NULL);
	
	int x1, x2, x3, x4;
	scanf("%1i %1i %1i %1i", &x1, &x2, &x3, &x4);
	
	
	printf("%i%i%i%i", (x3 + 7) % 10, (x4 + 7) % 10, (x1 + 7) % 10, (x2 + 7) % 10 );

	return 0;
}