#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define n0 7.5e10
 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");

	int k, x, a, b, c, d;
	scanf("%i %i", &k, &x);
	switch (k){
		case 1 :printf("%i", x);
		break;
		case 2 :a = x/10;
				b = x%10;
				printf("%i", a*b);
		break;
		case 3 :a = x%10;
				b = (x%100)/10;
				c = x / 100;
				printf("%i", a*b*c);
		break;
		case 4 :a = x%10;
				b = (x%100)/10;
				c = (x%1000)/100;
				d = x/1000;
				printf("%i", a*b*c*d);
		break;
		
	}

return 0;
}