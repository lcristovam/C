#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float eta , gas;
	
	printf("Digite o preco do Etanol ? ");
	scanf(" %f", &eta);
	
	printf("Digite o preco da Gasolina? ");
	scanf("%f", &gas);
	
	
	printf(" o percentual e: %f", (eta/gas));
	
	return 0;
}
