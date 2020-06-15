#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1, n2 ,n3, n4, media;
	
	printf("Informe a nota 1: ");
	scanf("%f", &n1);
	
	printf("\nInforme a nota 2: ");
	scanf("%f", &n2);
	
	printf("\nInforme a nota 3: ");
	scanf("%f", &n3);
	
	
	printf("\nInforme a nota 4: ");
	scanf("%f", &n4);
	
	media = (n1 +n2 +n3 +n4) /4;
	
	printf("A media e %.2f ", media);
	
	if(media <=4){
		
		printf("\nReprovado");
		
	}else if(media <7){
		
		printf("\nEsta em recuperacao");
		
	}else{
		
		printf("\nEsta aprovado!");		
	}
		

	return 0;
}
