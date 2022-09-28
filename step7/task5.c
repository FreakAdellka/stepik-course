#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	int k;
	scanf("%i", &k);
	
	int f, n, x;
	n = 1;
	if(k == 0){
		printf("1");
		return 0;
	}
	for(int i = 1; i<=k; i++){
		f = n*i;
		n = f;
	}
	printf("%i", f);
	
	
return 0;
}