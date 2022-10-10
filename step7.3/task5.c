#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	int a, b;
	scanf("%i", &a);
	while(b != -9999){
		scanf("%i", &b);
		if(b == -9999) break;
		if(b <= a){
			printf("NO");
			return 0;
		}
		else{
			a = b;
		}
	}
	printf("YES");
  return 0;
}