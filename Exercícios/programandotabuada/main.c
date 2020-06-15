#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	  int n , i=1;
	  
	  printf("Informe o numero da tabuada:  ");
	  scanf("%d", &n);
	  
	  while(i<=10){
	  	printf("%d x %d = %d \n", n, i, n*i);
	  	i++;
	  	
	  	
	  }
	  
	
	return 0;
}
