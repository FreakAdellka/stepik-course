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
	int mass[10][10];
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			scanf("%i", &mass[i][j]);
			
		}
	}
	int a = 1;
	int b = 1;
	int x = n-1;
	
	for(int i = 0; i< n; i++){
		for(int j = 0; j<n; j++){
			int y = i+j;
			if(i == j)a = a*mass[i][j];
			if(y == x) b = b*mass[i][j];
		}
	}
	
/*	
	for(int i = 0; i<n; i++){//вывод массива
		for(int j = 0; j<n; j++){
			printf("%2i ", mass[i][j]);
		}
		printf("\n");
	}
*/	

	if(a > b) printf("%i %i", a, b);
	else if( a < b) printf("%i %i", b, a);
	else printf("%i %i", a, b);
	
	
	
	
	
	return 0;
}