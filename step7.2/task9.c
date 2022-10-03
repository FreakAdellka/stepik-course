#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	int a;
	scanf("%i", &a);
	int k = 1;
/*	if(a == 1) {
		printf("1");
		return 0;
	}
*/	
	while(pow(2,k) <= a){
		printf("%i ", k);
		k++;
	}
	
	
return 0;
}