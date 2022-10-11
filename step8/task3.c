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
	int flag = 0;
	for(int i = 0; i < n; i++){
		scanf("%i", &mass[i]);
	}
	
	for(int i = 0; i<n; i++){
		if(mass[i] % 2 == 0){
			printf("%i ", mass[i]);
		}
		else continue;
	}
	for(int i = 0; i<n; i++){
		if(mass[i] % 2 != 0){
			printf("%i ", mass[i]);
		}
		else continue;
	}
	
	
	return 0;
}