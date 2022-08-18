#include <stdio.h>
#define pi 3.1415926
int main(){
	setbuf(stdout, NULL);
	int a;
	scanf("%i", &a);
	if((a % 2) == 0){
		printf("1");
	}
	else printf("0");
	
	return 0;
}