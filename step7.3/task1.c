#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	int a = 1;
	while(a != 0){
		scanf("%i", &a);
		if(a>0) printf("%i ", a);
		if(a ==0) return 0;
	}
  return 0;
}