#include <stdio.h>

/*Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha
do usuário.

EsCoLhA do usuári o oPErAção
1 Média entre os números digitados
2 Diferença do maior pelo menor
3 Produto entre os números digitados
4 Divisão do primeiro pelo segundo

Se a opção digitada for inválida, mostre uma mensagem de erro e termine a execução do programa.
Lembre-se de que, na operação 4, o segundo número deve ser diferente de zero.*/
int main(){
	
	float num1, num2,operacao;
	
	printf("Digite o primeiro numero: \n");
	scanf("%f", &num1);
	printf("Digite o segundo numero: \n");
	scanf("%f", &num2);
	printf("Digite uma das operacoes 1-2-3-4: \n");
	scanf("%f", &operacao);
	

	
	if (operacao == 1){
		printf("A media entre os numeros digitados e: %.2f\n", ((num1 + num2)/ 2));
	}else if (operacao ==2){
		if(num1 > num2){
			printf("A diferencae: %.2f\n", (num1 - num2));
		}else {
			printf ("A diferenca e: %.2f\n",(num2 - num1));
		}
	}else if(operacao ==3){
		printf("O produto entre os numeros e: %.2f\n", (num1 * num2));
	}else if(operacao ==4 && num2 != 0){
		printf("A divisao dos numeros e: %.2f\n", (num1 / num2));
	}else{
		printf("Operacao invalida\n");
	}
	return 0;
}

