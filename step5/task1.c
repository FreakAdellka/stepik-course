#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

 
int main(void) {
	setbuf(stdout,NULL);
	
	int x;
	scanf("%i", &x);
	int s_grani = pow(x,2);
	int s_pov = s_grani * 6;
	int v = pow(x,3);
	printf("%i %i %i", s_grani, s_pov, v);
	
	return 0;
}