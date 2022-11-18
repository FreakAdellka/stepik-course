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
	char b = a-32;
	printf("%c", b);

	return 0;
}