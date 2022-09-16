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

  switch (a%2) {
    default  : break;
    case 1 : printf("Любит\n"); break;
    case 0 : printf("Не любит\n"); break;
    
  }

  return 0;
}