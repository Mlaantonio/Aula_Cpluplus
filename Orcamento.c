/*Programa para verificar se o orçamento está
compativel com os gastos*/

#include <stdio.h>
#include <locale.h> //blibioteca para reconhecer caracteres especiais

int main (){
	float sal_recebido,g1,g2,g3,total;
	setlocale(LC_ALL,"Portuguese");
	printf("\n Informe o salário: ");
	scanf("%f", &sal_recebido); //recebe o valor do salário e armazena na variável sal_recebido
	printf("\n Informe 1º gasto: ");
	scanf("%f", &g1); //recebe o valor do gasto1 e armazena na variável g1
	printf("\n Informe 2º gasto: ");
	scanf("%f", &g2); //recebe o valor do gasto2 e armazena na variável g2
	printf("\n Informe 3º gasto: ");
	scanf("%f", &g3); //recebe o valor do gasto3 e armazena na variável g3
	total=g1+g2+g3;
	printf("\n O total de gastos foi: %.2f ",total);
	if(sal_recebido>=total){
		printf("\n Gastos dentro do Orçamento.\n");	
	}else{
		printf("\n Orçamento estourado.\n");
	}
	return (0);
}
