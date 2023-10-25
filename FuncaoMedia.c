#include <stdio.h>
#include <locale.h>

double calcularMedia (double num1, double num2, double num3){   //Função para calcular a media valor double
	return(num1+num2+num3)/3;
}

int main (){    //A Função principal, por onde o programa é iniciado
	
	double a, b, c;                         //declaração da variável do tipo double
	printf("Digite o primeiro numero: \n");    
	scanf("%lf", &a);  
	                  
	printf("Digite o segundo numero: \n");    
	scanf("%lf", &b);  
	
	printf("Digite o terceiro numero: \n");    
	scanf("%lf", &c); 	
	double media = calcularMedia(a, b,c);  //Chama a função "calcularMedia" e armazena na variável media
    
    printf("A media e: %.2lf\n", media);    // Exibe o valor de media
    

	return(0);
}
