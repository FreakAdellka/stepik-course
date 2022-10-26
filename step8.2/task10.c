#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	int n, m;
	int mass[10][10];
	scanf("%i %i", &m, &n);
	
	for(int i = 0; i< m; i++){//заполнение массива нулями
		for(int j = 0; j<n; j++){
			mass[i][j] = 0;
		}
	}
	
	int count = 1;
	int max_count = n*m;
	int k = 0;
	int max = m>n?m:n;
	while(k < round((float)max/2)){
		for(int i = k; i < n-1-k; i++){
			mass[k][i] = count;
			//printf("%i\n", count);
			count++;
			if(count > max_count) break;
		}
		if(count > max_count) break;
		for(int i = k; i<m-1-k; i++){
			mass[i][n-1-k] = count;
			//printf("%i\n", count);
			count++;
			if(count > max_count) break;
		}
		if(count > max_count) break;
		for(int i = n-1-k; i>k; i--){
			mass[m-1-k][i] = count;
			//printf("%i\n", count);
			count++;
			if(count > max_count) break;
		}
		if(count > max_count) break;
		for(int i = m-1-k; i>k;i--){
			mass[i][k] = count;
			//printf("%i\n", count);
			count++;
			if(count > max_count) break;
		}
		if(count > max_count) break;
		k++;
		
	}
	
	if((m%2!=0)&&(n%2!=0)&&(m==n)){
		mass[m/2][n/2] = m*n;
	}

	
	
	for(int i = 0; i< m; i++){//вывод массива
		for(int j = 0; j<n; j++){
			printf("%3i", mass[i][j]);
		}
		printf("\n");
	}

	return 0;
}