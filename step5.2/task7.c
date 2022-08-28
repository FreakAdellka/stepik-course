#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

 
int main(void) {
	setbuf(stdout,NULL);
	
	int x;
	scanf("%i", &x);
	int a = x / 10;
	int b = x % 10;
	int res = b * 100 + a;
	printf("%i", res);

	return 0;
}