#include <stdio.h>

int main(){
	setbuf(stdout, NULL);
	int x;
	int a = 0;
	scanf("%i", &x);
	while(x>0){
		a = a + (x%10);
		x = x / 10;
	}
	printf("%i", a);
	return 0;
}