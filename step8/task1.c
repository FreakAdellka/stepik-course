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
	int mass[n];
	int a;
	for(int i = 0; i <= n-1; i++){
		scanf("%i", &a);
		mass[i] = a;
	}
	for(int i = n; i>0; i--){
		printf("%i ", mass[i-1]);
	}
	return 0;
}