#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


#define n0 7.5e10
 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	int a, b, c;
	scanf("%i %i %i", &a, &b, &c);
	if(((a == 2)||(b == 2)||(c == 2))&&
		((a == 4)||(b == 4)||(c == 4))&&
		((a == 8)||(b == 8)||(c == 8))){
			 printf("open");
		 } 
	else printf("close");
	
	
	
	
return 0;
}