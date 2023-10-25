#include <stdio.h>
#include <stdlib.h>
/*1-10 Uma loja vende seus produtos no sistema de entrada e duas prestações, sendo a
entrada maior do que ou igual às duas prestações, que devem ser iguais, inteiras e as
maiores possíveis. Exemplo:
a. Se o valor da mercadoria for de R$ 270,00, a entrada e as duas prestações
são iguais a R$ 90,00;
b. Se o valor da mercadoria for de R$ 302,75, a entrada será de 102,75 e as
duas prestações serão iguais a R$ 100,00.
Escreva um algoritmo que receba o valor da mercadoria como entrada e forneça
como saída o valor da entrada e das duas prestações, de acordo com as regras acima.
Observe que uma justificativa para a adoção desta regra é que ela facilita a
confecção e o conseqüente pagamento dos boletos das duas prestações. */

int main(void){
	float valor, entrada, prestacao;
	int resto, calc;
	printf("Entre com o valor:_");
	scanf("%f", &valor);
	calc = valor;
	resto = calc % 3;
	prestacao = calc/3;
	entrada = valor-(2*prestacao);
	printf("Valor da entrada = %.2f\n", entrada);
	printf("Valor parcelas 2x %.2f\n", prestacao);
	return(0);
	
}
