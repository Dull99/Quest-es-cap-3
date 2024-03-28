#include <stdio.h>
/*Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor do aumento e o novo salário.

SALÁRIO PErCENTuAL DE AUMENTO
Até R$ 300,00 15%
R$ 300,00 R$ 600,00 10%
R$ 600,00 R$ 900,00 5%
Acima de R$ 900,00 0%*/
int main(){
	
	float salario, valorAume, novoSal;
	printf("Insira o valor do salario atual: \n");
	scanf("%f", &salario);
	
	if(salario<=300){
		printf("O valor do aumento sera: %.2f\nO valor do novo salario sera:%.2f ", (valorAume =salario * 0.15), salario + (salario * 0.15));
	}else if(salario> 300 && salario <600){
		printf("O valor do aumento sera: %.2f\nO valor do novo salario sera:%.2f ", (valorAume =salario * 0.1), salario + (salario * 0.1));
	}else if(salario >=600 && salario<900){
		printf("O valor do aumento sera: %.2f\nO valor do novo salario sera:%.2f ", (valorAume =salario * 0.05), salario + (salario * 0.05));
	}else if(salario >900) {
		printf("O valor do aumento sera: %.2f\nO valor do novo salario sera:%.2f ", (valorAume =salario * 0.0), salario + (salario * 0.0));
	}
	return 0;
}
