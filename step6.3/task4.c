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
	float x = sqrt(pow(a,2) + pow(b, 2));
	float y = sqrt(pow(c,2) + pow(d, 2));
	if(x>y) printf("2");
	else printf("1");
	
	
	
	
return 0;
}