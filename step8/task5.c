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
	
	for(int i = 0; i < n; i++){
		if((mass[i] > mass[0]) && (mass[i]<mass[n-1])){
			printf("%i ", mass[i]);
			count++;
		}
		else continue;
	}
	if(count == 0) printf("0");
	
	
	return 0;
}