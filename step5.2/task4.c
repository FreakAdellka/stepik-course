#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

 
int main(void) {
	setbuf(stdout,NULL);
	
	int x1, x2, x3, x4, x5;
	scanf("%i %i %i %i %i", &x1, &x2, &x3, &x4, &x5);
	int res = pow(x1,2) + pow(x2,2) + pow(x3,2)+ pow(x4,2)+ pow(x5,2); 
	printf("%i", res);

	return 0;
}