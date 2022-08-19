#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define pi 3.14159265358979323846

 
int main(void) {
	setbuf(stdout,NULL);
	
	int k;
	scanf("%i", &k);
	int a = k / 100;
	int b = (k % 100) / 10;
	int c = k % 10;
	int x = (c*100) + (b*10) + a;
	printf("%i", x);
	
	return 0;
}