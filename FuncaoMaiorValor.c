#include <stdio.h>
#include <locale.h>

float maior (float num1, float num2){   //Fun��o para verificar o maior valor float
	if(num1>num2){
		return num1;
	}else{
		return num2;
	}
	
}

int main (){    //A Fun��o principal, por onde o programa � iniciado
	
	float x, y, m;                   //declara��o da vari�vel do tipo float
	printf("Digite um valor: \n");    //Informa o usu�rio para digitar um numero
	scanf("%f", &x);                    //Armazena o numero digitado na variavel x
	printf("Digite outro valor: \n");  //Informa o usu�rio para digitar outro numero
	scanf("%f", &y);                   //Armazena o numero digitado na variavel y
	
	m = maior(x, y);  //Chama a fun��o "maior" e armazena na vari�vel m
    
    printf("O maior valor entre os dois numeros: %.2f\n", m);    // Exibe o valor de m
    

	return(0);
}
