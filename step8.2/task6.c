#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	int n;
	scanf("%i", &n);
	int mass[10][10];
	int above = 0;
	int under = 0;
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			scanf("%i", &mass[i][j]);
			
		}
	}
	
	for(int i = 0;i<n; i++){
		for(int j = 0; j<n; j++){
			if(i + j > i*2){
			above = above + mass[i][j];
			}
		}
	}
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			if(i + j > (n-1)){
				under = under + mass[i][j];
			}
		}
	}
	
	if(under > above) printf("%i %i", above, under);
	else if( under < above) printf("%i %i", under, above);
	else printf("%i %i", under, above);

//	printf("under %i  above %i", under, above);
	
/*	
	for(int i = 0; i<n; i++){//вывод массива
		for(int j = 0; j<n; j++){
			printf("%2i ", mass[i][j]);
		}
		printf("\n");
	}
*/	

	return 0;
}