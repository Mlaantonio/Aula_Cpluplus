#include <stdio.h>
#include <locale.h>

double calcularMedia (double num1, double num2, double num3){   //Fun��o para calcular a media valor double
	return(num1+num2+num3)/3;
}

int main (){    //A Fun��o principal, por onde o programa � iniciado
	
	double a, b, c;                         //declara��o da vari�vel do tipo double
	printf("Digite o primeiro numero: \n");    
	scanf("%lf", &a);  
	                  
	printf("Digite o segundo numero: \n");    
	scanf("%lf", &b);  
	
	printf("Digite o terceiro numero: \n");    
	scanf("%lf", &c); 	
	double media = calcularMedia(a, b,c);  //Chama a fun��o "calcularMedia" e armazena na vari�vel media
    
    printf("A media e: %.2lf\n", media);    // Exibe o valor de media
    

	return(0);
}
