#include <stdio.h>
/*Faça um programa que receba o preço de um produto e seu código de origem e mostre sua procedência.
A procedência obedece à tabela a seguir.
Código dE origEM ProCEdêNCiA
1 Sul
2 Norte
3 Leste
4 Oeste
5 ou 6 Nordeste
7 ou 8 ou 9 Sudeste
10 a 20 Centro-oeste
21 a 30 Nordeste*/
int main(){
	float preco, codigo;
	
	printf("Digite o preco do produto: \n");
	scanf("%f", &preco);
	printf("Digite o codigo de origem, 1 - 30: \n");
	scanf("%f", &codigo);
	
	if(codigo == 1){
		printf("A procedencia e: Sul\n", codigo);
	}else if(codigo == 2){
		printf("A procedencia e: Norte\n", codigo);
	}else if(codigo == 3){
		printf("A procedencia e: Leste\n", codigo);
	}else if(codigo == 4){
			printf("A procedencia e: Oeste\n", codigo);
	}else if(codigo>=5 && codigo<=6){
		printf("A procedencia e: Nordeste\n", codigo);
	}else if(codigo>=7 && codigo<=9){
		printf("A procedencia e: Sudeste\n", codigo);
	}else if(codigo>=10 && codigo<=20){
		printf("A procedencia e: Centro-Oeste\n", codigo);
	}else if(codigo>=21 && codigo<=30){
		printf("A procedencia e: Nordeste\n", codigo);
	}
	return 0;
}
