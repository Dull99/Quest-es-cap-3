#include <stdio.h>
/*Faça um programa que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a se-
guir, o novo preço e a classificação.

TABELA 1 — PErCENTuAL dE AuMENTo
PrEço %
Até R$ 50,00 5
Entre R$ 50,00 e R$ 100,00 10
Acima de R$ 100,00 15
TABELA 2 — CLAssiFiCAçõEs
NoVo PrEço CLAssiFiCAção
Até R$ 80,00 Barato
Entre R$ 80,00 e R$ 120,00 (inclusive) Normal
Entre R$ 120,00 e R$ 200,00 (inclusive) Caro
Maior que R$ 200,00 Muito caro*/
int main(){
	float preco, novoPreco;
	
	printf("Insira o preco do produto:\n");
	scanf("%f", &preco);
	
     if(preco <=50){
		printf("O novo preco do produto e: %.2f\n", novoPreco = preco + (preco * 0.05));
	}else if(preco> 50 && preco<100){
	printf("O novo preco do produto e: %.2f\n ", novoPreco = preco + (preco * 0.10));
	}else if(preco>=100){
	printf("O novo preco do produto e: %.2f\n ", novoPreco = preco + (preco * 0.15));
	}
	if(novoPreco<=80){
		printf("Classificacao: Barato\n", novoPreco);
	}else if(novoPreco>80 && novoPreco<120){
	    printf("Classificacao: Normal\n", novoPreco);	
	}else if(novoPreco>=120 && novoPreco<200){
	    printf("Classificacao: Caro\n", novoPreco);
	}else if(novoPreco>200){
		printf("Classificacao: Muito caro\n", novoPreco);
	}
	return 0;
}
