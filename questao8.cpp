#include <stdio.h>
#include <math.h>

/*Fa�a um programa para calcular e mostrar o sal�rio reajustado de um funcion�rio. O percentual de aumento
encontra-se na tabela a seguir.

sAL�rio PErCENTuAL dE AuMENTo
At� R$ 300,00 35%
Acima de R$ 300,00 15%*/

int main(){
	
	float salario;
	
	printf("Insira o salario: \n");
	scanf("%f", &salario);
	
	if(salario <=300){
		printf("O valor do salario reajustado e: %.2f\n", (salario * 35)/100 + salario);
	}else if(salario >300){
		printf("O salario do salario reajustado e: %.2f\n", (salario * 15)/100 + salario);
	}
	
	return 0;
}
