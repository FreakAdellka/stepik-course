#include <stdio.h>
#include <math.h>
#define pi 3.1415926
int main(){
	setbuf(stdout, NULL);
	double a, b, y;
	scanf("%lf %lf %lf", &a, &b, &y);
	double res = (a*b*sin((y*pi)/180))/2;
	printf("%.2lf", res);
	
	return 0;
}