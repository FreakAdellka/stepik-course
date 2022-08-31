#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

 
int main(void) {
	setbuf(stdout,NULL);
	
	int x;
	scanf("%i", &x);
	int a = x / 7;
	int b = x - (a * 7);
	
	printf("%i", b);

	return 0;
}