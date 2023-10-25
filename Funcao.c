#include <stdio.h>
#include <locale.h>

int soma (int a, int b){   //Função para o programa, pode ser usada antes, depois ou no meio da função principal
	return a+b;
}

int main (){    //A Função principal, por onde o programa é iniciado
	
	int n1, n2, s; //declaração da variável do tipo inteiro
	
	scanf("%d", &n1);
	scanf("%d", &n2);
	
	s = soma(n1, n2);  //Chama a função "soma" e armazena na variável s
    
    printf("soma: %d", s);
    //printf("soma: %d", soma(n1,n2));  // Pode chamar a função dentro de outra função (printf)

	return(0);
}
