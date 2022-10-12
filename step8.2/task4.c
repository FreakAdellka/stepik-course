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
			mass[i][j] = 0;
		}
	}
	
	for(int i = 0; i< n; i++){
		int a = 1;
		for(int j = i;j<=n-i+8; j++){
			mass[i][j] = a;
			a++;
		}
	}
	
	for(int i = 0; i< n; i++){
		int a = 1;
		for(int j = i;j<=n-i+8; j++){
			mass[j][i] = a;
			a++;
		}
	}
	
	
		
	for(int i = 0; i<n; i++){//вывод массива
		for(int j = 0; j<n; j++){
			printf("%2i ", mass[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	return 0;
}