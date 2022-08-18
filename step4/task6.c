#include <stdio.h>
#include <math.h>
#define pi 3.1415926
int main(){
	setbuf(stdout, NULL);
	int x1, x2;
	scanf("%i %i", &x1, &x2);
	int res = fabs(x2-x1);
	printf("%i", res);
	return 0;
}