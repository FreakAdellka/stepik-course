#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	int a, b;
	scanf("%i %i", &a, &b);
	for(int k = a; k<=b; k++){
		
		for(int i = 1; i <= k ; i++){
			printf("%4.0i", k);
		}
	}
	
	
return 0;
}