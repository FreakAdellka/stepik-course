#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define n0 7.5e10
 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");

	char s;
	int age, height, weight;
	double bov_m, bov_f;
	scanf("%c %i %i %i",&s, &age, &height, &weight);

	switch (s) {
	default  : printf("ERROR!\n"); break;
	case 'f' : bov_f = 10*weight + 6.25*height - 5*age - 161; 
				printf("|  BMR  |\n");
				printf("|%7.2f|\n",bov_f);
	break;
	
	case 'm' : bov_m = 10*weight + 6.25*height - 5*age + 5; 
				printf("|  BMR  |\n");
				printf("|%7.2f|\n",bov_m);
	break;

	}

return 0;
}