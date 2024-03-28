#include <stdio.h>
/*Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre
o novo salário.

FAixA sALAriAL % dE AuMENTo
Até R$ 300,00 50%
R$ 300,00 R$ 500,00 40%
R$ 500,00 R$ 700,00 30%
R$ 700,00 R$ 800,00 20%
R$ 800,00 R$ 1.000,00 10%
Acima de R$ 1.000,00 5%*/
int main(){
	float salario, novoSalario;
	
	printf("Insira o valor do salario\n");
	scanf("%f", &salario);
	if(salario<=300){
		printf("O novo salario sera: %.2f", novoSalario = salario + (salario * 50)/100);
	}else if(salario >300 && salario<500){
		printf("O novo salario sera: %.2f", novoSalario = salario + (salario * 40)/100);
	}else if(salario>=500 && salario<700){
		printf("O novo salario sera: %.2f", novoSalario = salario + (salario * 30)/100);
	}else if(salario>=700 && salario<800){
		printf("O novo salario sera: %.2f", novoSalario = salario + (salario * 20)/100);
	}else if(salario>=800 && salario<1000){
		printf("O novo salario sera: %.2f", novoSalario = salario + (salario * 10)/100);
	}else if(salario>=1000){
		printf("O novo salario sera: %.2f", novoSalario = salario + (salario * 5)/100);
	}
	return 0;
}
