#include <stdio.h>
#include <stdlib.h>


int main (void){
	
	int i=13; //declara��o da vari�vel do tipo inteiro para a repeti��o
	// EXERCICIO A
	printf("Exercicio A\n"); 
	while(i<=21){
	printf("%d\n", i);
	i++;
	}
	// EXERCICIO B
	i=13; 
	printf("Exercicio B\n"); 	
	while(i<=21){
	printf("%d\n", i);
	i=i+2;
	}
	// EXERCICIO C
	 i=13; 
	printf("Exercicio C\n"); 	
	while(i<=21){
	printf("%d\n", i);
	i=i+3;
	}
	// EXERCICIO D	
	i=21; 
	printf("Exercicio D\n"); 	
	while(i>=13){
	printf("%d\n", i);
	i--;
	}
	
	system("pause");
	return(0);
		
}
