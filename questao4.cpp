#include <stdio.h>

/*Faça um programa que receba três números e mostre o maior.*/

int main(){
	
	int num1, num2, num3;
	
	printf("Digite numero um: \n");
	scanf("%d", &num1);
	printf("Digite numero dois: \n");
	scanf("%d", &num2);
	printf("Digite numero tres: \n");
	scanf("%d", &num3);
	
	if(num1 > num2 && num1 > num3){
		printf("O maior numero e: %d\n", num1);
	}else if(num2 > num1 && num2 > num3){
		printf("O maior numero é: %d\n", num2);
	}else if(num3 > num1 && num3 > num2){
		printf("O maior numero e: %d\n", num3);
	}

	return 0;
}
