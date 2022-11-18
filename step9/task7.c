#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	
	char mass[26];
	int a;
	scanf("%i", &a);
	for(int i = 0; i<a; i++){
		mass[i] = 90-i;
	}
	for(int i = a-1; i>=0; i--){
		printf("%c", mass[i]);
	}
	
	
	
	return 0;
}