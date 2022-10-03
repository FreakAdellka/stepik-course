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
	int x =1;
	int k = a/10;
	while(k!=0){
		k = k/10;
		x++;
	}
	printf("%i", x);
	
return 0;
}