#include <stdio.h>
 /*Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a
mensagem de aprovado ou reprovado, considerando para aprovação média 7.*/
int main(){
	
	float nota1, nota2, nota3, nota4, media;

	
	printf("Digite nota 1\n" );
	scanf("%f", &nota1);
	printf("Digite nota 2\n" );
	scanf("%f", &nota2);
	printf("Digite nota 3\n" );
	scanf("%f", &nota3);
	printf("Digite nota 4\n" );
	scanf("%f", &nota4);
	
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	if(media >= 7.0){
		printf("Aprovado!\n");
	}else if(media < 7.0){
		printf("Reprovado!\n");

	}
	
	return 0;
}
