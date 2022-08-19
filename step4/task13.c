#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
 
int main(void) {
	setbuf(stdout, NULL);
	
	srand(time(NULL));
	int n;
	scanf("%i", &n);
	int res = 0 + rand()%(n+1);
	printf("%i", res);
	return 0;
}