#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	int a;
	scanf("%i", &a);
	int flag = 0;
	while(a != -9999){
		if(a == -9999) return 0;
		if(a == 2517){
			flag = 1;
			scanf("%i", &a);
			if(a == -9999) return 0;
		} 
		if(flag == 1){
			printf("%i ", a);
			scanf("%i", &a);
		}
		else scanf("%i", &a);
		
	}
	
	return 0;
}