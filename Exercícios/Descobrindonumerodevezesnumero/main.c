#include <stdio.h>
#include <stdlib.h>

#define LIN 3
#define COL 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int quadrado[LIN][COL] = {{65,100,300},{154,5,6},{200,99,98}};
	
	int i,j;
	
	int dp;
	
	int ds=0;
	
	for(i=0;i<LIN;i++){ //linhas
		for(j=0;j<COL;j++){ //colunas
			printf("[%d] ", quadrado[i][j]);		
	    }  
		printf("\n");      
    }
	
	printf(" \n \n\n\n -------------Diagonal Principal------------\n\n\n");
	
	for(i=0;i<LIN;i++){
		for(j=0;j<COL;j++){
		if(i==j){
			dp = dp + quadrado[i][j];
		}
		}	
	}
    
    
    printf("\n Soma total da diagonal principal eh: %d", dp);
    
    
    
    printf("\n\n\n\n\n---------- Diagonal Secundaria ----------\n\n\n\n\n");
    
    
    for(i=0;i<LIN;i++){
    	for(j=2;j>=0;j--){
    	if((i+j)==2){
    		ds= ds+quadrado[i][j];
		}
	}
}
    printf("\n Soma da diagonal secundária eh: %d", ds);
    
    
    
    
    
    
    
	return 0;
}
