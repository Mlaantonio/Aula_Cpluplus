/*Elabore uma algoritimo que leia dois valores do usuário e a operação que ele*/

#include <stdio.h>
#include <locale.h> //blibioteca para reconhecer caracteres especiais

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	
	
	switch(opcao){
		case 1:
			printf("%.1f + %.1f = %.1f",v1,v2,(v1+v2));
		break;
		
		case 2:
			printf("%.1f - %.1f = %.1f",v1,v2,(v1-v2));
		break;
		
		case 3:
			printf("%.1f * %.1f = %.1f",v1,v2,(v1*v2));
		break;
		
		case 4:
			printf("%.1f / %.1f = %.1f",v1,v2,(v1/v2));
		break;
	}
	
}
