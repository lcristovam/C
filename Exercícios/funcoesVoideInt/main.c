#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void imprimirCabecalho(){
      printf("*************************************\n");
      printf("************* Bem vindo *************\n");
      printf("*************************************\n");

}

int calcularMultiplicacao(int x1, int x2){
	int resultado;
	resultado = x1 * x2;
	return resultado;
}

int main(int argc, char *argv[]) {
	
	int n1, n2;
	imprimirCabecalho();
	printf(" Informe o numero 01: ");
	scanf("%d", &n1);
	printf("Informe o numero 02: ");
	scanf("%d", &n2);
	
	calcularMultiplicacao(n1,n2);
	
	
	printf("O resultado eh: %d", calcularMultiplicacao(n1,n2));

	

}
