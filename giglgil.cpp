#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char c = 'a';
	int x = 5;
	float f = 5.25;
	double d = 15.673;
	double y = 5.0e10;
	
	int numeros[5] = {1,2,3,4,5};
	for (size_t i = 0; i < 4; i++){
		printf("%d \n", numeros[i]);
	}
	printf("o valor é c =%c \n", c);
	printf("o valor é x =%x \n", x);
	printf("o valor é f =%f \n", f);
	printf("o valor é d =%d \n", d);
	printf("o valor é y =%y \n", y);
}
