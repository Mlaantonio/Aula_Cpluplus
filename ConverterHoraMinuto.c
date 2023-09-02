#include <stdio.h>
#include <stdlib.h>

int main (void){
	int hora, minutos;
	printf("Digite as horas inteiras:__");
	scanf("%d", &hora);
	switch (hora)
	case (hora < 0);
	printf("As horas devem ser maior que 0");	
	case (hora>=24);
	printf("As horas devem ser menor que 24");	
	case (hora);
	minutos = hora * 60;
	printf("Horas digitadas = %d\n", hora);
	printf("Em minutos = %d\n", minutos);
	system("pause");
	return(0);
}
