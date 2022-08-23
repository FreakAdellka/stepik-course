#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define pi 3.14159265358979323846

 
int main(void) {
	setbuf(stdout,NULL);
	
	int k;
	scanf("%i", &k);
	printf("%i",(k+3)%2);
	
	return 0;
}