#include <stdio.h>
#include <stdlib.h>


int main (void){
	//declaração das variáveis do tipo inteiro
	int a, b, soma;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &a); //recebe um número inteiro e armazena na variável a
	
	printf("Digite outro numero inteiro ");
	scanf("%d", &b); //recebe um número inteiro e armazena na variável b
	
	//Efetua adição de a com b e armazena na variável soma
	soma = a + b;
	printf("O valor da soma = %d\n", soma); //Mostra a mensagem com o resultado
	
	system("pause");
	return(0);	
}
