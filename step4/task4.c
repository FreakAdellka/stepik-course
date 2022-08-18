#include <stdio.h>
#define pi 3.1415926
int main(){
	setbuf(stdout, NULL);
	int a;
	double r;
	scanf("%i", &a);
	r = (a * pi)/180;
	printf("%.2lf", r);
	return 0;
}