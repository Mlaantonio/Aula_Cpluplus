#include <stdio.h>
#include <locale.h>


int main (){
	
	int num, cont, resul; //declara��o da vari�vel do tipo inteiro para a repeti��o
	setlocale(LC_ALL,"PORTUGUESE");
	
	printf("Informe o numero: \n"); 
	scanf("%d", &num);

	if (num>=1 && num<=10){
		for(cont=1;cont<=10;cont++){
			resul=(num*cont);
			printf("\t %d x %d = %d\n", num, cont, resul);
		}
	}else{
		printf("\t %d x %d = %d\n", num, cont, resul);
	}
	return(0);
}
