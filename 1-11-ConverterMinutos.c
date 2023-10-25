//Escreva um algoritmo que converta um intervalo de tempo dado em minutos para
//um intervalo de tempo dado em horas, minutos e segundos. Exemplo:
//a. Se a entrada for 87 min, o algoritmo deve fornecer como saída 1 h 27 min e 0 seg;
//b. Se a entrada for 121,5 min, o algoritmo deve fornecer como saída 2 h 1 min e 30 seg;
//c. Se a entrada for 145,87 min, o algoritmo deve fornecer como saída 2 h 25 min e 52,2 seg;
#include <stdio.h>
#include <locale.h>
int main(void){
	float valor, segundo;
	int hora, minuto, inteiro;
	printf("Entre com o valor em minutos:_");
	scanf("%f", &valor);
	hora = valor / 60;
	inteiro = valor;
	minuto = inteiro % 60;
	segundo = minuto / 60;
	printf("%d h %d min e %.2f seg \n", hora, minuto, segundo);
	
	return(0);
	
}
