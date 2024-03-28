#include <stdio.h>
/*Uma empresa decide aplicar descontos nos seus preços usando a tabela a seguir. Faça um programa que
receba o preço atual de um produto e seu código, calcule e mostre o valor do desconto e o novo preço.

PrEço ATuAL % dE dEsCoNTo
Até R$ 30,00 Sem desconto
Entre R$ 30,00 e R$ 100,00 10%
Acima de R$ 100,00 15%*/
int main(){
	float precoAtual, novoPreco, valorDesc;
	printf("Insira o preco atual:\n");
	scanf("%f", &precoAtual);
	if(precoAtual <=30){
		printf("Sem desconto!\n");
	}else if(precoAtual> 30 && precoAtual<100){
		printf("O valor do desconto sera: %.2f\nO valor do novo preco sera: %.2f\n", valorDesc = (precoAtual * 10)/100, novoPreco=precoAtual-(precoAtual *0.10));
	}else if(precoAtual>=100){
		printf("O valor do desconto sera: %.2f\nO valor do novo preco sera: %.2f\n", valorDesc = (precoAtual * 15)/100, novoPreco=precoAtual-(precoAtual *0.15));
	}
	return 0;
}
