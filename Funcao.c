#include <stdio.h>
#include <locale.h>

int soma (int a, int b){   //Fun��o para o programa, pode ser usada antes, depois ou no meio da fun��o principal
	return a+b;
}

int main (){    //A Fun��o principal, por onde o programa � iniciado
	
	int n1, n2, s; //declara��o da vari�vel do tipo inteiro
	
	scanf("%d", &n1);
	scanf("%d", &n2);
	
	s = soma(n1, n2);  //Chama a fun��o "soma" e armazena na vari�vel s
    
    printf("soma: %d", s);
    //printf("soma: %d", soma(n1,n2));  // Pode chamar a fun��o dentro de outra fun��o (printf)

	return(0);
}
