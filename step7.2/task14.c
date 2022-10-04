#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	int a, b;
	int c = 1;
	scanf("%i %i", &a, &b);
	while(c){
		if((c % a == 0)&&(c % b == 0)){
			printf("%i", c);
			return 0;
		}
		c++;
	}
  return 0;
}