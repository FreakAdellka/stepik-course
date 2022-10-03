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
	int min = 999999;
	int max = -999999;
	while(a != 0){
		if(min > a) min = a;
		if(max < a) max = a;
		scanf("%i", &a);
	}
	printf("%i %i", max, min);
	
	
return 0;
}