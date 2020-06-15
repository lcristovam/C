#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float salario, novosalario;
	
	printf("Digite o Salario ");
	scanf("%f", &salario);
	
	if(salario <= 1031 ){ //Aumento 15%
		
		novosalario= salario *1.15 ;
		printf("Novo Salario %f", novosalario);
		
	}else if(salario >1031 && salario <= 2500){
		novosalario= salario * 1.10;
		printf(" Novo salario  %f", novosalario);
	}else{
	
		novosalario = salario * 1.05;
		printf("Novo salario %f", novosalario);
		
		
	}
	

	
	return 0;
}
