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
	int mass[100];
	int i_min = 0;
	int i_max = 0;
	int i;
	int k;
	int j;
	for(i = 0; i < n; i++){
		scanf("%i", &mass[i]);
	}
	int max = mass[0];
	int min = mass[0];
	for(k = 0; k<n; k++){
		if(mass[k] < min){
			min = mass[k];
			i_min = k;
		}
		if(mass[k] > max){
			max = mass[k];
			i_max = k;
		}
	}
	int temp;
	temp = mass[i_min];
	mass[i_min] = mass[i_max];
	mass[i_max] = temp;
	for(j = 0; j<n; j++){
		printf("%i ", mass[j]);
	}
	
	
	
	return 0;
}