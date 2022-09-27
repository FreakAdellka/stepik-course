#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


#define n0 7.5e10
 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");

	float x, y;
	int a, b, c, d;
	scanf("%f %f", &x, &y);
	a = ((x>0)&&(y>0));
	b = ((x>0)&&(y<0))*4;
	c = ((x<0)&&(y>0))*2;
	d = ((x<0)&&(y<0))*3;
//	printf("%i\n %i\n %i\n %i\n", a, b, c, d);
	printf("%i\n", a + b +c + d);

//	printf("%i", ((x>0)&&(y>0)) || ((x<0)&&(y>0))*2 || ((x<0)&&(y<0))*3 || ((x>0)&&(y<0))*4);
return 0;
}