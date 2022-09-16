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
  scanf("%c",&s);

  switch (s) {
    default  : break;
    case 'l' : printf("коня потеряешь, себя спасёшь!\n"); break;
    case 'f' : printf("и себя и коня потеряешь!\n"); break;
    case 'r' : printf("себя потеряешь, коня спасёшь!\n"); break;
  }

  return 0;
}