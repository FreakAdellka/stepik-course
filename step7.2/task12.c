#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	double E;
	scanf("%lf", &E);
	double x = 1;
	double a = 1/x;
	double e = 1;
	for(int i = 1; a > E; i++){
		x = x*i;
		a = 1/x;
		e = e+a;
	}
	printf("%.8lf", e);
return 0;
}