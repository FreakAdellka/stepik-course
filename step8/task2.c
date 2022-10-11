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
	int mass[n];
	int flag = 0;
	for(int i = 0; i < n; i++){
		scanf("%i", &mass[i]);
	}
	
	for(int k = 0; k< (n+1/2); k++){
		if(mass[k] == mass[n-1-k]){
			flag = 1;
			continue;
		}
		else{
			printf("NO");
			return 0;
		}
	}
	if(flag == 1) printf("YES");
	
	return 0;
}