#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
 int a = 0, k = 0;
  int res = 0;

  scanf("%i %i", &a, &k);
  res = 1;
  while(k > 0){

    if (k%2 == 0){   
      a = a*a;
      k = k/2;
    }else { 
      res = res * a;
      k = k - 1;
   }
 }
  printf("%i\n", res);

  return 0;
}