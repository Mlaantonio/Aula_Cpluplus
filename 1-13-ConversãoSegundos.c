/*Escreva um algoritmo que receba como entrada um intervalo de tempo dado em
segundos e converta este valor para um intervalo de tempo dado em horas, minutos e segundos. Exemplo:
a. Se a entrada for 5220 seg, o algoritmo deve fornecer como sa�da 1 h 27 min e 0 seg;
b. Se a entrada for 7290 seg, o algoritmo deve fornecer como sa�da 2 h 1 min e 30 seg;
c. Se a entrada for 8752,2 seg, o algoritmo deve fornecer como sa�da 2 h 25 min e 52,2 seg.*/
#include <stdio.h>
#include <locale.h>
int main(void){
	
	int valor, hora, minuto, segundo;
	printf("Entre com o valor em segundos:_");
	scanf("%d", &valor);
	hora = valor / 3600;
	minuto = (valor - (hora*3600))/60;
	segundo = (valor - ((hora*3600)+(minuto*60)));
	printf("%dh %dmin e %dseg \n", hora, minuto, segundo);
	
	return(0);
	
}
