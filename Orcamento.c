/*Programa para verificar se o or�amento est�
compativel com os gastos*/

#include <stdio.h>
#include <locale.h> //blibioteca para reconhecer caracteres especiais

int main (){
	float sal_recebido,g1,g2,g3,total;
	setlocale(LC_ALL,"Portuguese");
	printf("\n Informe o sal�rio: ");
	scanf("%f", &sal_recebido); //recebe o valor do sal�rio e armazena na vari�vel sal_recebido
	printf("\n Informe 1� gasto: ");
	scanf("%f", &g1); //recebe o valor do gasto1 e armazena na vari�vel g1
	printf("\n Informe 2� gasto: ");
	scanf("%f", &g2); //recebe o valor do gasto2 e armazena na vari�vel g2
	printf("\n Informe 3� gasto: ");
	scanf("%f", &g3); //recebe o valor do gasto3 e armazena na vari�vel g3
	total=g1+g2+g3;
	printf("\n O total de gastos foi: %.2f ",total);
	if(sal_recebido>=total){
		printf("\n Gastos dentro do Or�amento.\n");	
	}else{
		printf("\n Or�amento estourado.\n");
	}
	return (0);
}
