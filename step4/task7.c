#include <stdio.h>
#include <math.h>
#define pi 3.1415926
int main(){
	setbuf(stdout, NULL);
	double x1, y1, x2, y2;
	scanf("%lf %lf %lf %lf",&x1, &y1, &x2, &y2);
	double res = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
	printf("%.2lf", res);
	return 0;
}