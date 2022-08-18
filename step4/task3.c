#include <stdio.h>

int main(){
	setbuf(stdout, NULL);
	int a, b;
	double x, res;
	scanf("%i %i %lf", &a, &b, &x);
	printf("%.2lf", (b-a)*x);
	return 0;
}