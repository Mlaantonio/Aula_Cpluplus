#include <stdio.h>
#include <stdlib.h>

int main (void){
	int hora, minutos;
	printf("Digite as horas inteiras:__");
	scanf("%d", &hora);
	if (hora <= 0){  //Verifica se o número digitado é menor que 0
	printf("O número deve ser maior que zero 0!");	
	}else if (hora>24){   //Verifica se o número digitado é maior que 24
	printf("O numero deve ser menor ou igual a 24!");	
	}else{  // se o número digitado estiver no range
	minutos = hora * 60; //calcula os minutos
	printf("Horas digitadas = %d\n", hora);   //exibe o valor digitado
	printf("Em minutos = %d\n", minutos);	//exibe o resultado
	}
	system("pause");
	return(0);
}
