#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

 
int main(void) {
	setbuf(stdout,NULL);
	
	int f, d;
	scanf("%i %i", &f, &d);
	double mm = ((f * 12) + d) * 25.4;
	
	
	printf("%i\'%i\" = %.2lfm.", f, d, mm/1000);

	return 0;
}