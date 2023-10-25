#include <stdio.h>
#include <stdlib.h>


int main (void){
	
	int i; //declaração da variável do tipo inteiro para a repetição
	printf("Exercicio A \n"); 	//Exercicio A
	for(i=13;i<=21;i++){
	printf("%d\n", i); 	
	}
	
	printf("Exercicio B \n");  //Exercicio B
	i=13;
	for(i=13;i<=21;i=i+2){
	printf("%d\n", i); 	
	}
	
	printf("Exercicio C \n");  //Exercicio C
	for(i=13;i<=21;i=i+3){
	printf("%d\n", i); 	
	}	
	system("pause");
	return(0);	
}
