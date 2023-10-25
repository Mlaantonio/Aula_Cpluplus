# include <stdio.h>
//Programa para calculo do sálario
int main (){
	float salario, desconto, salario_liquido; //definido valores inteiros
//	int salario = 600;
//	salario = salario + 100;
//	printf("%d", salario);	
	printf("Entre com o salario:_"); //printf("Entre com o salário");
	scanf("%f", &salario);
	printf("Entre com o em percentual:_");
	scanf("%f", &desconto);
	desconto = salario * desconto / 100;
	salario_liquido = salario - desconto;
	printf("O salario liquido e = %.2f \n", salario_liquido);
	return(0);
}

