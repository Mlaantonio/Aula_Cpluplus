#include <stdio.h>
#include <locale.h>

float maior (float num1, float num2){   //Função para verificar o maior valor float
	if(num1>num2){
		return num1;
	}else{
		return num2;
	}
	
}

int main (){    //A Função principal, por onde o programa é iniciado
	
	float x, y, m;                   //declaração da variável do tipo float
	printf("Digite um valor: \n");    //Informa o usuário para digitar um numero
	scanf("%f", &x);                    //Armazena o numero digitado na variavel x
	printf("Digite outro valor: \n");  //Informa o usuário para digitar outro numero
	scanf("%f", &y);                   //Armazena o numero digitado na variavel y
	
	m = maior(x, y);  //Chama a função "maior" e armazena na variável m
    
    printf("O maior valor entre os dois numeros: %.2f\n", m);    // Exibe o valor de m
    

	return(0);
}
