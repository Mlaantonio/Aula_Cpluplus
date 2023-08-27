#include <stdio.h>
#include <stdlib.h>

int main (void){
	int hora, minutos;
	printf("Digite as horas inteiras:__");
	scanf("%d", &hora);
	minutos = hora * 60;
	printf("Horas digitadas = %d\n", hora);
	printf("Em minutos = %d\n", minutos);
	system("pause");
	return(0);
}
