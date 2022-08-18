#include <stdio.h>
#include <math.h>

int main(){
	setbuf(stdout,NULL);
	
	double a, b, c, d, e, f, h;
	scanf("%lf %lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f, &h);
	double res = a/(b*(c/(d*(e/(f*h)))));  
	printf("%.2f", res);

  return 0;
}