#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

 
int main(void) {
	setbuf(stdout,NULL);
	
	int x;
	scanf("%i", &x);
	printf("%i", x*10);

	return 0;
}