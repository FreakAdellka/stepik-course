#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	int flag3, flag5;
	for(int i = 1; i <= 100; i++){
		flag3 = 0;
		flag5 = 0;
		if(i % 3 == 0) flag3 = 1;
		if(i % 5 == 0) flag5 = 1;
		if((flag3 == 1) && (flag5 == 0)){
			printf("Fizz ");
			continue;
		}
		if((flag3 == 0) && (flag5 == 1)){
			printf("Buzz ");
			continue;
		}
		if((flag3 == 1) && (flag5 == 1)){ 
			printf("FizzBuzz ");
			continue;
		}
		else printf("%i ", i);
	}
	
	return 0;
}