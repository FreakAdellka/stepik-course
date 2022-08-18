#include <stdio.h>

int main(){
	setbuf(stdout, NULL);
	int x = 13, y = 45;
	y = y / x;
	x = y * x;
	printf("%i %i", x, y);
	
	return 0;
}