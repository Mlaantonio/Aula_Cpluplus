#include <stdio.h>
#include <stdlib.h>

int main (void){
	float hora, minutos;
	printf("Digite as horas para conversao:__");
	scanf("%f", &hora);
	minutos = hora * 60; //calcula os minutos
	printf("Horas digitadas = %.2f\n", hora);   //exibe o valor digitado
	printf("Em minutos = %.2f\n", minutos);	//exibe o resultado
	system("pause");
	return(0);
}
