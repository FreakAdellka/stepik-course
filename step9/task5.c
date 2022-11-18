#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	
	char n;
	scanf("%c", &n);
	if((n>=65)&&(n<=90)) printf("en");
	else if((n>=97)&&(n<=122)) printf("en");
	else if((n>=48)&&(n<=57)) printf("digit");
	else printf("error");
	
	
	
	return 0;
}