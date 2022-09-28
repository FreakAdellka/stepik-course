#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	int n;
	scanf("%i", &n);
	for(int i = 1; i<=n; i++){
		printf("%i ", i);
	}
	
	
	
return 0;
}