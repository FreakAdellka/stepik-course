#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	int a;
	scanf("%i\n", &a);
	int b;
	int c;
	for(int i = 0; i< a; i++){
		c = b;
		scanf("%i", &b);
		if(b != c){
			printf("%i ", b);
		}
		else c = b;
	}
	
  return 0;
}