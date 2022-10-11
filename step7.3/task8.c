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
	int flag1 = 0;
	int flag2 = 0;
	int x = 0;
	int b;
	while(a != -9999){
		if(a == -9999) break;
		if(a == 0){
			if((flag1 == 0) && (flag2 == 0)){
				flag1 = 1;
				scanf("%i", &a);
				continue;
			}
			else if((flag1 == 1) && (flag2 == 0)){
				flag2 = 1;
			}
			else if((flag1 == 1) && (flag2 == 1)){
				break;
			}
/*			scanf("%i", &b);
			if(b == 0) printf("0");
			else a = b;
*/
		}
		
		if((flag1 == 1) && (flag2 == 0)){
			x = x + a;
		}
		scanf("%i", &a);
	}
	printf("%i", x);
	
	return 0;
}