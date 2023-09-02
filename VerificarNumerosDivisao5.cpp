//Identificar se um número é divisivel por 5
#include <stdio.h>
#include <locale.h> //blibioteca para reconhecer caracteres especiais

int main (){
	int num;
	setlocale(LC_ALL,"Portuguese");
	printf("\n Digite um número inteiro: \n\n");
	scanf("%d", &num); //recebe um número inteiro e armazena na variável num
	if (num%5==0){ //verifica se a divisão do número digitado por 5 retorna zero
		printf("\n O número %d é divisivel por 5",num);	
	}else{
		printf("\n O número %d NÃO é divisivel por 5",num);		
	}
	return (0);
}
