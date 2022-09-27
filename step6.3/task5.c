#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


#define n0 7.5e10
 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	int a, b, c, d;
	scanf("%i %i %i %i", &a, &b, &c, &d);
	if((a == 1) && (b == 0) && (c == 2) && (d == 4)) printf("open");
	else printf("close");
	
	
	
	
return 0;
}