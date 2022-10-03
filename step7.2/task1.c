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
	while(a != -9999){
		printf("%i ", a);
		scanf("%i", &a);
	}
	printf("%i", a);
	
	
return 0;
}