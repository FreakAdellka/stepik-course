#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	int a;
	scanf("%i", &a);
	int posled = 1;
	if(a == -9999) printf("NO");
	else{
		while(a != -9999){
			if(a>0){
				posled = 1;
			}
			if(a<0){
				posled = 0;
				printf("NO");
				return 0;
			}
			scanf("%i", &a);
		}
		if(posled == 1) printf("YES");
	}
  return 0;
}