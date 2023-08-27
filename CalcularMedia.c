#include <stdio.h>
#include <stdlib.h>

int main (void){
	float a, b, c, media;
	printf("Digite o primeiro numero:__");
	scanf("%f", &a);
	printf("Digite o segundo numero:__");
	scanf("%f", &b);
	printf("Digite o terceiro numero:__");
	scanf("%f", &c);
	media = (a + b + c) / 3;
	printf("O valor da media = %.2f.\n", media); 
	system("pause");
	return(0);	

}
