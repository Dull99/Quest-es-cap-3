#include <stdio.h>
/*O pre�o ao consumidor de um carro novo � a soma do custo de f�brica com a porcentagem do distri-
buidor e dos impostos, ambos aplicados ao custo de f�brica. As porcentagens encontram-se na tabela a

seguir. Fa�a um programa que receba o custo de f�brica de um carro e mostre o pre�o ao consumidor.

CusTo dE F�BriCA % do dis Tri Buidor % dos iMPosTos
At� R$ 12.000,00 5 isento
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
