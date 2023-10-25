/*O Teorema de Pitágoras estabelece a seguinte relação “Em qualquer triângulo 
retângulo, o quadrado da hipotenusa é igual à soma dos quadrados dos catetos”. Crie 
um programa para ler os valores da hipotenusa e dos catetos e identificar se o 
triângulo é ou não retângulo.*/
#include <stdio.h>
#include <locale.h>
int main(void){
	
	int cat1, cat2, hip, somahip, somacat;
	printf("Entre com o valor do primeiro cateto:_");
	scanf("%d", &cat1);
	printf("Entre com o valor do segundo cateto:_");
	scanf("%d", &cat2);
	printf("Entre com o valor da hipotenusa:_");
	scanf("%d", &hip);	
	somahip = hip * hip;
	somacat = (cat1 * cat1) + (cat2 * cat2);
	if(somacat == somahip){
	printf("O triangulo é Retangulo \n");	
	}else{
	printf("O triangulo NAO é Retangulo \n");
    }
	return(0);
	
}
