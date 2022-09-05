#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

 
int main(void) {
	setbuf(stdout,NULL);
	
	int f;
	scanf("%i", &f);
	double celcium = (5  * ((double)f - 32))/9;
	
	
	printf("%.2lf", celcium);

	return 0;
}