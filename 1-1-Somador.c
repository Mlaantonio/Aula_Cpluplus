#include <stdio.h>
#include <stdlib.h>


int main (void){
	//declara��o das vari�veis do tipo inteiro
	int a, b, soma;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &a); //recebe um n�mero inteiro e armazena na vari�vel a
	
	printf("Digite outro numero inteiro ");
	scanf("%d", &b); //recebe um n�mero inteiro e armazena na vari�vel b
	
	//Efetua adi��o de a com b e armazena na vari�vel soma
	soma = a + b;
	printf("O valor da soma = %d\n", soma); //Mostra a mensagem com o resultado
	
	system("pause");
	return(0);	
}
