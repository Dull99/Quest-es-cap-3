#include <stdio.h>
/*Fa�a um programa que receba o sal�rio bruto de um funcion�rio e, usando a tabela a seguir, calcule e

mostre o valor a receber. Sabe-se que este � composto pelo sal�rio bruto acrescido de gratifica��o e des-
contado o imposto de 7% sobre o sal�rio.

TABELA dAs grATiFiCA��Es
SAL�RIO GRATIFICA��O
At� R$ 350,00 R$ 100,00
R$ 350,00 R$ 600,00 R$ 75,00
R$ 600,00 R$ 900,00 R$ 50,00
Acima de R$ 900,00 R$ 35,00*/
int main(){
	float salario, valorReceber, imposto;
	printf("Insira o valor do salrio bruto: \n");
	scanf("%f", &salario);
	imposto = salario * 0.07;
	
	if(salario<=350){
		printf("O valor do salario a receber sera: %.2f \n", valorReceber = salario - (salario * 0.07)+100);
	}else if(salario> 350 && salario<600){
		printf("O valor do salario a receber sera: %.2f \n", valorReceber = salario - (salario * 0.07)+75);	
	}else if(salario>=600 && salario<900){
		printf("O valor do salario a receber sera: %.2f \n", valorReceber = salario - (salario * 0.07)+50);
	}else if(salario>=900){
		printf("O valor do salario a receber sera: %.2f \n", valorReceber = salario - (salario * 0.07)+35);
	}
	return 0;
}
