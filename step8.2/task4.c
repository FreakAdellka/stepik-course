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
	int mass1[10][10];
	int mass2[10][10];
	int mass[10][10];
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			mass1[i][j] = 0;
			mass2[i][j] = 0;
			
		}
	}
	
	for(int i = 0; i< n; i++){
		int a = 1;
		for(int j = i;j<=n-i+8; j++){
			mass1[i][j] = a;
			a++;
		}
	}

	for(int i = 0; i< n; i++){
		int b = 1;
		for(int j = i;j<=n-j+8; j++){
			mass1[j][i] = b;
			b++;
		}
	}

	
	
		
	for(int i = 0; i<n; i++){//вывод массива
		for(int j = 0; j<n; j++){
			printf("%2i ", mass1[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	return 0;
}