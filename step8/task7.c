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
	int count = 0;
	for(int i = 0; i < n; i++){
		scanf("%i", &mass[i]);
	}
	
	int sum = 0;
	for(int i = 0; i<n; i++){
		sum = sum + mass[i];
	}
	double sred = (double)sum/n;
	
	for(int i = 0; i<n; i++){
		if(mass[i] > sred){
			printf("%i ", mass[i]);
		}
		else continue;
	}
	for(int i = 0; i<n; i++){
		if(mass[i] <= sred){
			printf("%i ", mass[i]);
		}
		else continue;
	}
	
	
	return 0;
}