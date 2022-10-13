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
	for(int i = 1; i<=a; i++){
		if(a%i == 0){
			k++;
		}
	}
	if(k>2) printf("0");
	if(k==2) printf("1");
	
	
return 0;
}