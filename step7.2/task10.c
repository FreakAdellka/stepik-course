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
	while(pow(2, k) < a){
		k++;
	}
	printf("%i", k);
	
return 0;
}