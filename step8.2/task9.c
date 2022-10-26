#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	int n;
	scanf("%i\n", &n);
	int mass[10][10];
	int arr[10][10];
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			scanf("%i", &mass[i][j]);
		}
	}
	int k;
	scanf("%i", &k);
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			int a = j+k;
			int b = a%n;
			arr[i][b] = mass[i][j];
		}
	}
	



	
	for(int i = 0; i<n; i++){//вывод массива
		for(int j = 0; j<n; j++){
			printf("%i ", arr[i][j]);
		}
		printf("\n");
	}
	

	return 0;
}