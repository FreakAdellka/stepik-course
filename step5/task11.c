#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define pi 3.14159265358979323846

 long int fact(int n){
	 return (n < 2) ? 1 : n * fact(n - 1);
 }
int main(void) {
	setbuf(stdout,NULL);
//	int n = 0;
	for(int i = 1; i < 10; i++){
		printf("%i! =%8i\n",i, fact(i));
	}
	printf("10!=%8i\n", fact(10));
	
	
	return 0;
}