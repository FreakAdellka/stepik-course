#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	char a = 97; 
	char b = 65;
	char c = 37;
	char d = 72;
	char e = 104;
	char f = 53;
	printf("%c\n", a);
	printf("%c\n", b);
	printf("%c\n", c);
	printf("%c\n", d);
	printf("%c\n", e);
	printf("%c\n", f);

	return 0;
}