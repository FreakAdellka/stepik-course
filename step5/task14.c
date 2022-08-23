#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define pi 3.14159265358979323846

 double fact(int n){
	 return (n < 2) ? 1 : n * fact(n - 1);
 }
int main(void) {
	setbuf(stdout,NULL);
	
	int R;
	scanf("%i", &R);
	int r = R * 2;
	int h = (4 * R) / 900;
	printf("%i %i", r, h);
	
	return 0;
}