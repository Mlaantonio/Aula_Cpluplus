/*O Teorema de Pit�goras estabelece a seguinte rela��o �Em qualquer tri�ngulo 
ret�ngulo, o quadrado da hipotenusa � igual � soma dos quadrados dos catetos�. Crie 
um programa para ler os valores da hipotenusa e dos catetos e identificar se o 
tri�ngulo � ou n�o ret�ngulo.*/
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
	printf("O triangulo � Retangulo \n");	
	}else{
	printf("O triangulo NAO � Retangulo \n");
    }
	return(0);
	
}
