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
	int min = 0;
	int max = 0;
	while(a != 0){
		sum = sum+a;
		scanf("%i", &a);
	}
	printf("%i", sum);
	
	
return 0;
}