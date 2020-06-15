#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float valor, valorfinal;
	char op;
	
	
	
	
	
	printf("Valor da Compra ");
	scanf ("%f", &valor);
	
	
	printf("d.dinheiro \nC.Credito\nD.Debito\n");
	scanf("%s", &op);
	
	switch(op){
		case 'D' :
		valorfinal = valor * 0.90;
		break;
		case 'd' :	
		valorfinal = valor * 0.80;
		break;		
		case 'C' :	
		valorfinal = valor * 0.95;
		break;
		default :	
			printf("Valor invalido\n");
	}
			
	printf("Valor final eh %f", valorfinal);
			
	
	
	
	
	
	
	return 0;
}
