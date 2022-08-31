#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

 
int main(void) {
	setbuf(stdout,NULL);
	
	int x;
	scanf("%i", &x);
	int a = (x + 2)  / 7;
	int b = (x + 2)	- (a * 7);
	
	printf("%i", b);

	return 0;
}