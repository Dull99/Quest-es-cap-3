#include <stdio.h>
/*Faça um programa que receba a idade de um nadador e mostre sua categoria, usando as regras a seguir.
Para idade inferior a 5, deverá mostrar mensagem.

CATEgoriA idAdE
Infantil 5 a 7
Juvenil 8 a 10
Adolescente 11 a 15
Adulto 16 a 30
Sênior Acima de 30*/
int main(){
	int idade, categoria;
	printf("Insira a idade:\n");
	scanf("%d", &idade);
	if(idade<5){
		printf("Nao possiu categoria.\n", idade);
	}else if(idade>=5 && idade<=7){
		printf("Categoria infantil.\n", idade);
	}else if(idade>=8 && idade<=10){
		printf("Categoria juvenil.\n", idade);
	}else if(idade>=11 && idade<=15){
		printf("Categoria adololescente.\n", idade);
	}else if(idade>=16 && idade<=30){
		printf("Categoria adulto.\n", idade);
	}else if(idade>30){
		printf("Categoria senior.\n", idade);
	}
	return 0;
}
