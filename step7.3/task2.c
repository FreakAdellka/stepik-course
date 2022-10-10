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
	for(int i = 1; i<= a; i++){
		int b = 1;
		while(b<=i){
			printf("%i ", b);
			b++;
		}
		printf("\n");
	}
  return 0;
}