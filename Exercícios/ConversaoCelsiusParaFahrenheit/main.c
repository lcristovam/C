#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float  F, C;
	
	printf(" Digite uma temperatura em Graus Celsius para ser convertida em Fahrenheit \n");
	scanf(" %f", &C);
	
	F = (9 *C +160) /5;
	
	printf(" O valor e de: %.1f", F );
	printf(" Fahrenheit");
	

	
	
	return 0;
}
