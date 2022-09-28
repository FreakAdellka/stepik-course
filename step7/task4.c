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
	
	for(int i = m; i>=k; i--){
		printf("%i ", i);
	}
	
return 0;
}