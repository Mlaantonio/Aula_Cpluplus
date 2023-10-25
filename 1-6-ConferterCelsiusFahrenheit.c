#include <stdio.h>
#include <stdlib.h>

int main (void){
	int F, C;
	printf("Digite a temperatura em Fahrenheit:__");
	scanf("%d", &F);
	C = 5*((F-32)/9);
	printf("Temperatura em Fahrenheit = %d\n", F);
	printf("Temperatura em Celsius = %d\n", C);
	system("pause");
	return(0);
}
