#include <stdio.h>
#include <stdlib.h>

int main (void){
	float n1, n2, n3, n4, med;
	printf("Entre com a nota da N1:_ \n");
	scanf("%f", &n1);
	printf("Entre com a nota da N2:_ \n");
	scanf("%f", &n2);
	printf("Entre com a nota da N3:_ \n");
	scanf("%f", &n3);
	printf("Entre com a nota da N4:_ \n");
	scanf("%f", &n4);
	med = (n1+(n2*2)+(n3*3)+(n4*4))/10;
	printf("O valor da media é: %.2f \n", med);
	return(0);
}
