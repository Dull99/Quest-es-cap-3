#include <stdio.h>

/*Faça um programa que receba dois números e mostre o menor.*/

int main(){
	
	int numero1, numero2;
	
	printf("Digiteo o numero um:\n");
	scanf("%d", &numero1);
	printf("Digite o numero dois:\n");
	scanf("%d", &numero2);
	 if(numero1 > numero2){
	 	printf("O menor numero e: %d\n", numero2);
	 }else if(numero1 < numero2){
	 	printf("O menor numero e: %d\n", numero1);
	 }
	 
	 return 0;
}
