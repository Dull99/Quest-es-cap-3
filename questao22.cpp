#include <stdio.h>
/*Faça um programa que receba a idade e o peso de uma pessoa. De acordo com a tabela a seguir, verifique
e mostre em qual grupo de risco essa pessoa se encaixa.

IDADE

PESO

Até 60 Entre 60 e 90 (inclusive) Acima de 90
Menores que 20 9 8 7
De 20 a 50 6 5 4
Maiores que 50 3 2 1*/
int main(){
	
	int idade;
	float peso;
	
	printf("Insira a idade: \n");
	scanf("%d", &idade);
	printf("Insira o peso: \n");
	scanf("%f",&peso);
	if(idade<20){
		if(peso<=60){
		printf("O grupo de risco sera: 9 \n");
		}
		if(peso>60 && peso<90){
			printf("O grupo de risco sera: 8 \n");
		}
		if(peso>90){
			printf("O grupo de risco sera: 7 \n");
		}
	}
	if(idade>=20 && idade<50){
		if(peso<=60){
			printf("O grupo de risco sera: 6 \n");
		}
		if(peso>60 && peso<90){
			printf("O grupo de risco sera: 5 \n");
		}
		if(peso>90){
			printf("O grupo de risco sera: 4 \n");
		}
	}
	if(idade>50){
		if(peso<=60){
			printf("O grupo de risco sera: 3 \n");
		}
		if(peso>60 && peso<90){
			printf("O grupo de risco sera: 2 \n");
		}
		if(peso>90){
			printf("O grupo de risco sera: 1 \n");
		}
	}

	return 0;
}
