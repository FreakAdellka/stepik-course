#include <stdio.h>
#include <math.h>
#define pi 3.1415926
int main(){
	setbuf(stdout, NULL);
	
	int n;
	scanf("%i", &n);
	int res = pow(2,n);
	printf("%i", res);
	
	return 0;
}