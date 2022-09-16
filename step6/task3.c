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
  scanf("%i",&a);

  switch (a) {
    default  : break;
    case 1 : printf("плохо\n"); break;
    case 2 : printf("неудовлетворительно\n"); break;
    case 3 : printf("удовлетворительно\n"); break;
    case 4 : printf("хорошо\n"); break;
    case 5 : printf("отлично\n"); break;
  }

  return 0;
}