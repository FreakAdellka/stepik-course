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
	int arr[n];
	int k = 0;
	for(int i = 0; i < n; i++){
		scanf("%i", &mass[i]);
	}
	for(int i = 0; i< n/2; i++){
		arr[(n/2)+i] = mass[i];
	}
	for(int i = n/2; i<n;i++ ){
		arr[k] =mass[i];
		k++;
	}
	for(int i = 0; i<n; i++){
		printf("%i ", arr[i]);
	}
	
	
	
	return 0;
}