#include <stdio.h>
#include <stdlib.h>

int main (void){
	int nA, nB, temp;
	printf("Digite um numero A:_ \n");
	scanf("%d", &nA);
	printf("Digite um numero B:_ \n");
	scanf("%d", &nB);
	printf("Os valores iniciais de A=%d e B=%d \n",nA,nB);
	nA = nA+nB;
	nB = nA-nB;
	nA = nA-nB;
	printf("Os valores trocados de A=%d e B=%d \n",nA,nB);
	return(0);
	
}
