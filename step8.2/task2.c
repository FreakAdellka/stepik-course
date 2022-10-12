#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	int n, m;
	scanf("%i %i\n", &n, &m);
	int mass[10][10];
	int arr[10][10];
	
	for(int i = 0; i< n; i++){
		for(int j = 0; j<m; j++){
			scanf("%i", &mass[i][j]);
		}
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			arr[j][i] = mass[i][j];
		}
	}
	for(int i = 0; i< m; i++){
		for(int j = 0; j<n; j++){
			printf("%i ", arr[i][j]);
		}
		printf("\n");
	}

	
	
	
	
	return 0;
}