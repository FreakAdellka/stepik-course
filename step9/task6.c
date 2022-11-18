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
	char X = 64 + a;
	char x = 96 + a;
	printf("%c%c", X, x);
	
	
	
	return 0;
}