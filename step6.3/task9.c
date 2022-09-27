#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


#define n0 7.5e10
 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	int a;
	scanf("%i", &a);
	if(a<=6) printf("дошкольник");
	if((a>=7)&&(a<=18)) printf("школьник");
	if((a>=19)&&(a<=59)) printf("рабочий");
	if(a>=60) printf("пенсионер");
	
	
	
	
return 0;
}