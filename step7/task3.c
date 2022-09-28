#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	int k, m;
	scanf("%i %i", &k, &m);
	if(k<1) k = 1;
	int z = 0;
	for(int i = k; i<=m; i++){
		printf("%i ", i);
		z++;
	}
	printf("\n%i",z);
	
return 0;
}