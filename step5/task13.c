#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define pi 3.14159265358979323846

 double fact(int n){
	 return (n < 2) ? 1 : n * fact(n - 1);
 }
int main(void) {
	setbuf(stdout,NULL);
	
	double x;
	scanf("%lf",&x);
	
	double e1 = 1 + ((pow(x,1))/fact(1)) + ((pow(x,2))/fact(2)) + ((pow(x,3))/fact(3)) + ((pow(x,4))/fact(4)) + ((pow(x,5))/fact(5));
	printf("%lf\n%lf", exp(x), e1);
	
	
	
	return 0;
}