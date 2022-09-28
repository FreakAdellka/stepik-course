#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


#define n0 7.5e10
 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	int a, b, c, o1, o2, o3;
	scanf("%i %i %i", &a, &b, &c);
	if((a<=b)&&(a<=c)){
		o1 = a;
	}
	if((b<=a)&&(b<=c)){
		o1 = b;
	}
	if((c<=a)&&(c<=b)){
		o1 = c;
	}
	if((a>=b)&&(a>=c)){
		o3 = a;
	}
	if((b>=a)&&(b>=c)){
		o3 = b;
	}
	if((c>=a)&&(c>=b)){
		o3 = c;
	}
	if((o1 == a)&&(o3 == b)) o2 = c;
	if((o1 == a)&&(o3 == c)) o2 = b;
	if((o1 == b)&&(o3 == a)) o2 = c;
	if((o1 == b)&&(o3 == c)) o2 = a;
	if((o1 == c)&&(o3 == b)) o2 = a;
	if((o1 == c)&&(o3 == a)) o2 = b;
	
	printf("%i %i %i", o1, o2, o3);
	
	
	
return 0;
}