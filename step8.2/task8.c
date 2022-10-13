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
	int res[10] = {0};
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			scanf("%i", &mass[i][j]);
		}
	}
	
	for(int i = 0; i < m; i++){
		for(int j = 0; j<n; j++){
			res[i] = res[i] + mass[j][i];
		}
	}
	
	int min = 99999999;
	int min_count = 0;
	int max = -99999999;
	int max_count = 0;
	
	for(int i = 0; i<m; i++){
		 if(res[i]>max){
			 max = res[i];
			 max_count = i;;
		 }
		 if(res[i] < min){
			 min = res[i];
			 min_count = i;
		 }
	}
	for(int i = 0;i < n; i++){
		if(res[i] == max){
			max_count = i;
			break;
		}
	}
	for(int i = 0;i < n; i++){
		if(res[i] == min){
			min_count = i;
			break;
		}
	}
/*	if(m == 2){
		min_count = 0;
		max_count = 1;
	}
*/	
	
	for(int i = 0;i <n; i++){//замена в массиве
		int temp  = mass[i][min_count];
		mass[i][min_count] = mass[i][max_count];
		mass[i][max_count] = temp;
	}




	
	for(int i = 0; i<n; i++){//вывод массива
		for(int j = 0; j<m; j++){
			printf("%i ", mass[i][j]);
		}
		printf("\n");
	}
	

	return 0;
}