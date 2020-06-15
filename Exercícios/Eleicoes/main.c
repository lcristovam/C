#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int idade;
	
	printf("Qual sua idade? ");
	scanf("%d", &idade);
	
	if(idade >=0 && idade <=15){
		printf("Não vota");	
	}else if(idade < 18){
	
	printf("Eleitor Optante!");	
	}else if(idade >= 18 && idade <= 65){
		printf("Voto Obrigatório");
	}else{
		
		printf("Eleitor optante!");
	}
		

	return 0;
}
