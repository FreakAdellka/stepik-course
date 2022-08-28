#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

 
int main(void) {
	setbuf(stdout,NULL);
	
	int x; 
	scanf("%i", &x);
	int res = x % 2;
	int temp = res == 0 ? 1: -1;
	printf("%i", temp);
	
	return 0;
}