#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	
int conversaoCelsiusFahrenheit(int t){

	int tempF;
	tempF = (t * 9/5) +32;
	return tempF;
}
int conversaoFahrenheitCelsius(int t){
	return (t-32) * 5/9;
	

}
int main(int argc, char *argv[]) {
	
	int temp, op;
	char flag;


	do{
		flag='t';//true
		printf("Informe a temperatura:  ");
		scanf("%d", &temp);
		
		printf("\n 1 - Celsius para Fahrenheit ");
		printf("\n 2 - Fahrenheit para Celsius\n  ");
		scanf("%d", &op);
			
		if(op==1){
			printf("Resultado de Celsius para Fahrenheit eh: %d ", conversaoCelsiusFahrenheit(temp));
			conversaoCelsiusFahrenheit(temp);
		}else if(op==2){
			printf("Resultado de  Fahrenheit para Celsius  eh: %d ", conversaoFahrenheitCelsius(temp));	
			conversaoFahrenheitCelsius(temp);
		}else{ 
			flag='f';//false
			printf("Opcao invalida ! \n \n");
		}	
	}while(flag!='t');	
	
	
	return 0;
}

