#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define n0 7.5e10
 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");

	int m, d;
	scanf("%i %i", &m, &d);
	switch (m){
		case 1 : printf("%i", (31 * 0) + (30 * 0) + d);
		break;
		case 2 : printf("%i", ((31 * 1) + (30 * 0) + d));
		break;
		case 3 : printf("%i", (31 * 1)+ 28 + (30 * 0) + d);
		break;
		case 4 : printf("%i", (31 * 2)+ 28 + (30 * 0) + d);
		break;
		case 5 : printf("%i", (31 * 2)+ 28 + (30 * 1) + d);
		break;
		case 6 : printf("%i", (31 * 3)+ 28 + (30 * 1) + d);
		break;
		case 7 : printf("%i", (31 * 3)+ 28 + (30 * 2) + d);
		break;
		case 8 : printf("%i", (31 * 4)+ 28 + (30 * 2) + d);
		break;
		case 9 : printf("%i", (31 * 5)+ 28 + (30 * 2) + d);
		break;
		case 10 : printf("%i", (31 * 5)+ 28 + (30 * 3) + d);
		break;
		case 11 : printf("%i", (31 * 6)+ 28 + (30 * 3) + d);
		break;
		case 12 : printf("%i", (31 * 6)+ 28 + (30 * 4) + d);
		break;
	}

return 0;
}