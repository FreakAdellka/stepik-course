#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


#define n0 7.5e10
 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	int a, b, c;
	scanf("%i %i %i", &a, &b, &c);
	int x = 0;
	if (a>0){
		x++;
	}
	if (b>0){
		x++;
	}
	if(c>0){
		x++;
	}
	
	printf("%i", x);
return 0;
}