#include <stdio.h>
#include <locale.h>

int soma (int a, int b){   //Fun��o para o programa, pode ser usada antes, depois ou no meio da fun��o principal
	return a+b;
}

int main (){    //A Fun��o principal, por onde o programa � iniciado
	
	int n1, n2, s; //declara��o da vari�vel do tipo inteiro
	
	scanf("%d", &n1);
	scanf("%d", &n2);
	
	s = soma(soma(soma(soma(soma(n1, n2), n2), n2), n2), n2);  //Chama a fun��o "soma" dentro da fun��o soma e armazena na vari�vel s
    
    printf("soma: %d", s);
 
	return(0);
}
