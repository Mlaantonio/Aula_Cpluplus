#include <stdio.h>
#include <stdlib.h>

int main (void){
	int nA, nB, temp;
	printf("Digite um numero A:_ \n");
	scanf("%d", &nA);
	printf("Digite um numero B:_ \n");
	scanf("%d", &nB);
	temp = nA;
	nA = nB;
	nB = temp;
	printf("Os valores trocados de A=%d e B=%d \n",nA,nB);
	return(0);
	
}
