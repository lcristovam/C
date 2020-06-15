#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	//A= PI * r²
	
	float area, PI=3.14, raio;
	
	printf("Informe o raio: ");
	scanf("%f",&raio);
	
	area= PI * raio *raio;
	printf("\nA area eh:  %.2f", area);
	
	
	
	return 0;
}
