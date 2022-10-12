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
	int arr[10][10];
	
	for(int i = 1; i<=n; i = i+2){
		for(int j = n; j>=1; j--){
			mass[i][n-j] = j;
		}
	}
	for(int i = 0; i<n; i=i+2){
		for(int j = 0; j<n; j++){
			mass[i][j] = j+1;
		}
	}
		
	for(int i = 0; i<n; i++){//вывод массива
		for(int j = 0; j<n; j++){
			printf("%i ", mass[i][j]);
		}
		printf("\n");
	}//вывод массива
	
	
	
	
	
	return 0;
}