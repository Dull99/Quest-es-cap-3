#include <stdio.h>
/*Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não.*/
int main(){
	int idade;
	printf("Digite a idade:\n");
	scanf("%d", &idade);
	if(idade>=18){
		printf("Maioridade!\n");
	}else{
		printf("Menoridade!\n");
	}
	return 0;
}
