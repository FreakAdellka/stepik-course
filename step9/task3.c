#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	char a;
	scanf("%c", &a);
	printf("%c %c", a-1, a+1);
	return 0;
}