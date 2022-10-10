#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	int a, b;
	scanf("%i", &a);
	int k = 1;
	while(b != -9999){
		scanf("%i", &b);
		k++;
		if(b == -9999) break;
		if(b <= a){
			printf("%i", k);
			return 0;
		}
		else{
			a = b;
		}
	}
	printf("0");
  return 0;
}