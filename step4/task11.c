#include <stdio.h>
#include <math.h>
#define pi 3.1415926
int main(){
	setbuf(stdout, NULL);
	
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	double p = (a+b+c)/2;
	double s = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.2lf", s);
	
	return 0;
}