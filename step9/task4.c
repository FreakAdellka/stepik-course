#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


 
int main(void) {
	setbuf(stdout,NULL);
	setlocale(LC_ALL, "");
	
	
	int n;
	scanf("%i\n", &n);
	char c;
	int mass[26] = {0};
	char mass_symb[n];
	for(int i = 0; i<n; i++){
		scanf("%c", &c);
		if(((c>=65)&&(c<=90))||((c>=97)&&(c<=122))){
			mass_symb[i] = c;
		}
		else{
			i--;
			continue;
		}
	}
	for(int i = 0; i<n; i++){
		switch (mass_symb[i]){
			case 'a' : mass[0]++; break;
			case 'b' : mass[1]++; break;
			case 'c' : mass[2]++; break;
			case 'd' : mass[3]++; break;
			case 'e' : mass[4]++; break;
			case 'f' : mass[5]++; break;
			case 'g' : mass[6]++; break;
			case 'h' : mass[7]++; break;
			case 'i' : mass[8]++; break;
			case 'j' : mass[9]++; break;
			case 'k' : mass[10]++; break;
			case 'l' : mass[11]++; break;
			case 'm' : mass[12]++; break;
			case 'n' : mass[13]++; break;
			case 'o' : mass[14]++; break;
			case 'p' : mass[15]++; break;
			case 'q' : mass[16]++; break;
			case 'r' : mass[17]++; break;
			case 's' : mass[18]++; break;
			case 't' : mass[19]++; break;
			case 'u' : mass[20]++; break;
			case 'v' : mass[21]++; break;
			case 'w' : mass[22]++; break;
			case 'x' : mass[23]++; break;
			case 'y' : mass[24]++; break;
			case 'z' : mass[25]++; break;
			case 'A' : mass[0]++; break;
			case 'B' : mass[1]++; break;
			case 'C' : mass[2]++; break;
			case 'D' : mass[3]++; break;
			case 'E' : mass[4]++; break;
			case 'F' : mass[5]++; break;
			case 'G' : mass[6]++; break;
			case 'H' : mass[7]++; break;
			case 'I' : mass[8]++; break;
			case 'J' : mass[9]++; break;
			case 'K' : mass[10]++; break;
			case 'L' : mass[11]++; break;
			case 'M' : mass[12]++; break;
			case 'N' : mass[13]++; break;
			case 'O' : mass[14]++; break;
			case 'P' : mass[15]++; break;
			case 'Q' : mass[16]++; break;
			case 'R' : mass[17]++; break;
			case 'S' : mass[18]++; break;
			case 'T' : mass[19]++; break;
			case 'U' : mass[20]++; break;
			case 'V' : mass[21]++; break;
			case 'W' : mass[22]++; break;
			case 'X' : mass[23]++; break;
			case 'Y' : mass[24]++; break;
			case 'Z' : mass[25]++; break;
		}
	}
	
	
	for(int i = 0; i<26; i++){
		printf("%i ", mass[i]);
	}
	return 0;
}