#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1, n2, soma, sub, mul, div, res;
	
	
	printf("Informe o valor 1: ");
	scanf("%f",&n1);
	
	printf("Informe o valor 2: ");
	scanf("%f",&n2);
	
	
	//soma
	soma= n1 + n2;
	printf("A soma eh: %f", soma);
	
	//subtracao
	sub= n1 - n2;
	printf("\nA subtracao eh:  %f", sub);
	
	
	//multiplicacao 
	mul= n1 * n2;
	printf("\nA multiplicacao dos dois numeros tem o resultado:  %f", mul);
	
	//divisao
	div= n1 /n2;
	printf("\nA divisao dos dois numeros tem o resultado: %f", div);
	



	
	return 0;
}
