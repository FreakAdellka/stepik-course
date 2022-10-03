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
	int k = 0;
	int stepen = 0;
	while(pow(2,k) <= a){
		if(pow(2,k) == a) stepen = 1;
		k++;
	}
	if(stepen == 1) printf("YES");
	if(stepen == 0) printf("NO");
	
	
return 0;
}