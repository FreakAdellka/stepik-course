#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	int k;
	scanf("%i", &k);
	
	int f1 = 1;
	int f2 = 1;
	int f3;
	
	if(k==1 || k ==2){
		printf("1");
		return 0;
	}
	
	for(int i = 3; i<=k; i++){
		f3 = f2 +f1;
		f1 = f2;
		f2 = f3;
	}
	printf("%i", f3);
	
	
	
return 0;
}