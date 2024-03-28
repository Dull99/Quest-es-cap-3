#include <stdio.h>
/*Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizan-
do as seguintes fórmulas (onde h é a altura):

¦¦ para homens: (72.7 * h) – 58.
¦¦ para mulheres: (62.1 * h) – 44.7.*/
int main(){
	float altura, pesoIdeal, sexo;
	
	printf("Insira a altura:\n");
	scanf("%f", &altura);
	printf("Digite 1 para masculino e 2 para femenino:\n");
	scanf("%f", &sexo);
	if(sexo==1){
		printf("O seu peso ideal sera: %.2f\n", pesoIdeal = (72.7 * altura)-58);
	}else if(sexo==2){
	    printf("O seu peso ideal sera: %.2f\n", pesoIdeal = (62.1 * altura)-44.7);	
	}
	return 0;
}
