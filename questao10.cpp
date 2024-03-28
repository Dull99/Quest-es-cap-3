#include <stdio.h>
/*O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distri-
buidor e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a

seguir. Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor.

CusTo dE FáBriCA % do dis Tri Buidor % dos iMPosTos
Até R$ 12.000,00 5 isento
Entre R$ 12.000,00 e R$ 25.000,00 10 15
Acima de R$ 25.000,00 15 20*/
int main(){
	float custoFabrica;
	printf("Insira o valor do custo de fabrica:\n ");
	scanf("%f", &custoFabrica);

	if(custoFabrica < 12000){
		printf("O preco ao consumidor sera = %.2f  ", ( custoFabrica + (custoFabrica * 0.05))) ;
	}else if(custoFabrica >=12000 && custoFabrica < 25000){
		printf("O preco ao consumidor sera = %.2f  ", (custoFabrica + (custoFabrica * 0.10) + (custoFabrica * 0.15)));
}else if(custoFabrica > 25000){
	   printf("O preco ao consumidor sera = %.2f  ", (custoFabrica + (custoFabrica * 0.15) + (custoFabrica * 0.20)));

}
return 0;
}
