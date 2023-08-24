#include <stdio.h>
#include <stdlib.h>


int main (void){
	float compra, parcela, entrada;
	int parcelas;
	printf("Digite o valor da compra \n");
	scanf("%f", &compra);
	printf("Digite a quantidade parcelas \n");
	scanf("%d", &parcelas);
	entrada = compra * 0.20;
	parcela = (compra - entrada) / parcelas--;
	printf("\n");
	printf("Valor da compra %.2f.\n", compra);
	printf("Valor da entrada %.2f.\n", entrada);
	printf("Valor das parcelas %.2f.\n", parcela);
	printf("Quantidade de parcelas %d.\n", parcelas);	
	}
