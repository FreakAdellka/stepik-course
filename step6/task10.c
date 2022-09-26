#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


#define n0 7.5e10
 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");

	int k;
	scanf("%i", &k);
	int a = k%10;
	switch (k){	
	case 11:
	case 12:
	case 13:
	case 14:printf("Мне %i лет",k);
	break;
	default : switch (a){
		case 1 :printf("Мне %i год",k);
		break;
		
		case 2 :
		case 3 :
		case 4 :printf("Мне %i года", k);
		break;
		
		case 5 :
		case 6 :
		case 7 :
		case 8 :
		case 9 :
		case 0 :printf("Мне %i лет",k);
		break;
	}
	}
return 0;
}