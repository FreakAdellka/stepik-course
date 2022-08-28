#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

 
int main(void) {
	setbuf(stdout,NULL);
	
	int x1, x2, x3, x4, x5;
	int even = 0;
	int odd = 0;
	scanf("%i %i %i %i %i", &x1, &x2, &x3, &x4, &x5);
	x1 % 2 == 0 ? even++: odd++;
	x2 % 2 == 0 ? even++: odd++;
	x3 % 2 == 0 ? even++: odd++;
	x4 % 2 == 0 ? even++: odd++;
	x5 % 2 == 0 ? even++: odd++;
	int res = odd - even;
	printf("%i", res);
	 
	return 0;
}