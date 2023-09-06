#include <stdio.h>
#include <stdlib.h>

int main (void){
	int numero, palpite;
	printf("Digite um numero entre 1 a 5:_");
	scanf("%d", &palpite);
	numero = 4;  
	if (palpite <= 5 && palpite > 0){ // Para ter duas verificações usamos "||" para "OU" e "&&" para "E"
		if(palpite==numero){
			printf("Voce acertou!\n");	
		}else{
			printf("Voce errou!\n");
		}
	}else{
	printf("Erro de apropriacao");	
	}
	
	
	
	
}
