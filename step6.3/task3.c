#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


#define n0 7.5e10
 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	int a, b;
	scanf("%i %i", &a, &b);
	if (abs(a) < abs(b)){
		printf("yes");
	}
	else printf("no");
	
	
	
return 0;
}