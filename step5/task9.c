#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define pi 3.14159265358979323846

 
int main(void) {
	setbuf(stdout,NULL);
	
	int k;
	scanf("%i", &k);
	long int temp = abs(pow(2, 30) - pow(10,9));
	long int res = k * temp;
	printf("%u", res);
	
	return 0;
}