#include <stdio.h>

/*Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra
na tabela a seguir:*/

int main(){
	
	float nota1, nota2, media;
	
	printf("Digite a primeira nota:\n" );
	scanf("%f", &nota1);
	printf("Digite a segunda nota:\n" );
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	if(media < 3.0){
		printf("Reprovado\n");
	}else if(media >= 3.0 && media < 7.0){
		printf("Exame\n");
	}else if(media > 7.0){
		printf("Aprovado\n");
	}
	
	return 0;
}
