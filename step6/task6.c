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
	int a, b;
	scanf("%i %i %c",&a, &b, &z);

	switch (z) {
	default  : printf("ERROR!\n"); break;
	case '+' : printf("%.2f", (float)a+(float)b); break;
	case '-' : printf("%.2f", (float)a-(float)b); break;
	case '*' : printf("%.2f", (float)a*(float)b ); break;
	case '/' : switch	 (b){
				case 0 : printf("ERROR!\n"); break;
				default : printf("%.2lf", (double)a/(double)b ); break;
				}				
				break;

	}

return 0;
}