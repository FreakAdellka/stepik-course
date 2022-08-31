#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

 
int main(void) {
	setbuf(stdout,NULL);
	
	int x;
	scanf("%i", &x);
	int a = x / 3600;
	int res = x - (a * 3600);
	printf("%i", res);

	return 0;
}