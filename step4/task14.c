#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
 
int main(void) {
	setbuf(stdout, NULL);
	
	srand(time(NULL));
	int a, b;
	scanf("%i %i", &a, &b);
	int res = a + rand()%(b-a+1);
	printf("%i", res);
	return 0;
}