#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	int a, b;
	int x = 1;
	scanf("%i %i", &a, &b);
	for(int k = a; k<=b; k++){
		
		for(int i = 1; i <= x ; i++){
			printf("%5.0i", k);
		}
		x++;
	}
	
	
return 0;
}