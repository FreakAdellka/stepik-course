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
	if((b==2) && ((a>=1)&&(a<=29))){
			printf("correct");
			return 0;
		}
	else if(((b == 1)||(b == 3)||(b == 5)||(b == 7 )||(b == 8)||(b == 10)||(b == 12)) &&
		((a>=1)&&(a<=31))){
			printf("correct");
			return 0;
		}
	else if(((b == 4)||(b == 6)||(b == 9)||(b == 11 )) &&
		((a>=1)&&(a<=30))){
		printf("correct");
			return 0;
	}
	else{
		printf("error");
			return 0;
	}
	
	
	
	
return 0;
}