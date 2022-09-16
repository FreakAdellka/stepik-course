#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define n0 7.5e10
 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");

	char z;
	float a, b;
	scanf("%c %f %f",&z, &a, &b);

	switch (z) {
	default  : printf("ERROR!\n"); break;
	case '+' : printf("%.2f", a+b); break;
	case '-' : printf("%.2f", a-b); break;
	case '*' : printf("%.2f", a*b ); break;
	case '/' : printf("%.2f", a/b); break;

	}

return 0;
}