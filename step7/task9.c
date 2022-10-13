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
	int k = 0;
	for(int i = 1; i<=a; i++){
		if(a%i == 0){
			printf("%i ", i);
			k++;
		}
	}
	printf("\n%i", k);
	
	
return 0;
}