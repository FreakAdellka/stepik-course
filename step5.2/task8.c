#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

 
int main(void) {
	setbuf(stdout,NULL);
	
	int x;
	scanf("%i", &x);
	int a = x / 10;
	int b = x % 100;
	int res = a * 10 + b;
	printf("%i", res);

	return 0;
}