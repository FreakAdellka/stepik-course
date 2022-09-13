#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

 
int main(void) {
	setbuf(stdout,NULL);
	
	int x3, x4, x1, x2;
	scanf("%1i %1i %1i %1i", &x3, &x4, &x1, &x2);
	
	
	printf("%i%i%i%i", (x1 + 3) % 10, (x2 + 3) % 10, (x3 + 3) % 10, (x4 + 3) % 10 );

	return 0;
}