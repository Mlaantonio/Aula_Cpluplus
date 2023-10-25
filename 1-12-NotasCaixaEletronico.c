/*Um algoritmo para gerenciar os saques de um caixa eletrônico deve possuir algum
mecanismo para decidir o número de notas de cada valor que deve ser
disponibilizado para o cliente que realizou o saque. Um possível critério é o da
“distribuição ótima” no sentido de que as notas de menor valor são distribuídas em
número mínimo possível. Exemplo:
a. Se a quantia solicitada for R$ 6,00, o algoritmo dever indicar uma nota de R$
5,00 e uma nota de R$ 1,00;
b. Se a quantia solicitada for R$ 17,00, o algoritmo deve indicar uma nota de R$
10,00, uma nota de R$ 5,00 e duas notas de R$ 1,00;
c. Se a quantia solicitada for R$ 87,00, o algoritmo deve indicar uma nota de R$
50,00, três notas de R$ 10,00, uma nota de R$ 5,00 e duas notas de R$ 1,00;
Escreva um algoritmo que receba o valor da quantia solicitada e retorne a distribuição 
das notas de acordo com o critério da distribuição ótima. Considere que só existem 
notas de R$ 50,00, R$ 10,00, R$ 5,00 e R$ 1,00.*/
#include <stdio.h>
#include <locale.h>
int main(void){
	int valor, nota50, nota10, nota5, nota1, resto;
	
	printf("Entre com o valor do saque:_");
	scanf("%d", &valor);
	
	resto = valor % 50;		
	if(resto>0){
		nota50 = valor/50;
    }else{
    	nota50 = 0;
	}
	resto = valor % 10;
	if(resto>0){
		nota10 = (valor-(nota50*50))/10;	
	}else{
		nota10 = 0;
	}		
	resto = valor % 5;
	if(resto>0){
		nota5 = (valor-((nota10*10)+(nota50*50)))/5;
	}else{
		nota5 = 0;
	}
	
	nota1 = (valor-((nota10*10)+(nota50*50)+(nota5*5)));
		
	
	printf("Notas de R$50,00=%d - Notas de R$10,00=%d - Notas de R$5,00=%d - Notas de R$1,00=%d \n", nota50, nota10, nota5, nota1);
	
	return(0);
}
