//Identificar se um n�mero � divisivel por 5
#include <stdio.h>
#include <locale.h> //blibioteca para reconhecer caracteres especiais

int main (){
	int num;
	setlocale(LC_ALL,"Portuguese");
	printf("\n Digite um n�mero inteiro: \n\n");
	scanf("%d", &num); //recebe um n�mero inteiro e armazena na vari�vel num
	if (num%5==0){ //verifica se a divis�o do n�mero digitado por 5 retorna zero
		printf("\n O n�mero %d � divisivel por 5",num);	
	}else{
		printf("\n O n�mero %d N�O � divisivel por 5",num);		
	}
	return (0);
}
