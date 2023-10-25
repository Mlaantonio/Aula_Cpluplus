#include <stdio.h>   //repositório basico
#include <math.h>    //repositório de expresões matemáticas
#include <locale.h>
#include <stdlib.h>

double calcularAreaRetangulo (double comprimento, double largura){   //Função para calcular area retangulo
	return comprimento * largura;
}

double calcularAreaTriangulo (double base, double altura){   //Função para calcular area Triangulo
	return 0.5 * base * altura;
}

double calcularAreaCirculo (double raio){   //Função para calcular area Circulo
	return M_PI * raio * raio;
}



int main (){    //A Função principal, por onde o programa é iniciado
	
	double comprimento, largura, base, altura, raio;                         //declaração da variável do tipo double
	printf("Digite o comprimento do retângulo: \n");    
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
	
	printf("A area do retangulo é: %.2lf - A area do triangulo é: %.2lf - A area do Circulo é: %.2lf", areaRetangulo, areaTriangulo, areaCirculo); 

	return(0);
}
