#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


#define n0 7.5e10
 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	int a;
	scanf("%i", &a);
	if(a <= 500) printf("350");
	else{
		printf("%i", 350+((a-500)*2));
	}
	
	
	
	
	
return 0;
}