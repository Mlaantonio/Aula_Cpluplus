#include <stdio.h>   //reposit�rio basico
#include <math.h>    //reposit�rio de expres�es matem�ticas
#include <locale.h>
#include <stdlib.h>

double calcularAreaRetangulo (double comprimento, double largura){   //Fun��o para calcular area retangulo
	return comprimento * largura;
}

double calcularAreaTriangulo (double base, double altura){   //Fun��o para calcular area Triangulo
	return 0.5 * base * altura;
}

double calcularAreaCirculo (double raio){   //Fun��o para calcular area Circulo
	return M_PI * raio * raio;
}



int main (){    //A Fun��o principal, por onde o programa � iniciado
	
	double comprimento, largura, base, altura, raio;                         //declara��o da vari�vel do tipo double
	printf("Digite o comprimento do ret�ngulo: \n");    
	scanf("%lf", &comprimento);  

	printf("Digite a largura do retangulo: \n");    
	scanf("%lf", &largura); 
	
	double areaRetangulo = 	calcularAreaRetangulo(comprimento, largura);   
	               
	printf("Digite a base do triangulo: \n");    
	scanf("%lf", &base);  
	
	printf("Digite a altura do triangulo: \n");    
	scanf("%lf", &altura); 	
	
	double areaTriangulo = calcularAreaTriangulo(base, altura);   
	
	printf("Digite o raio do circulo: \n");    
	scanf("%lf", &raio);  
	
	
	double areaCirculo = calcularAreaCirculo(raio);   
	
	printf("A area do retangulo �: %.2lf - A area do triangulo �: %.2lf - A area do Circulo �: %.2lf", areaRetangulo, areaTriangulo, areaCirculo); 

	return(0);
}
