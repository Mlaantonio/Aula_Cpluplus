#include <stdio.h>
#include <stdlib.h>

int main (void){
	int dividendo, divisor;
	printf("Digite o numero DIVIDENDO:_");
	scanf("%d", &dividendo);
	printf("Digite o numero DIVISOR:_");
	scanf("%d", &divisor);
	if (dividendo % divisor != 0){
	 printf("Divisao NAO retorna um numero inteiro!");	
	}else{
	 printf("Divisao retorna um numero inteiro!");	
	}

	return(0);



}
