#include <stdio.h>

/*Fa�a um programa que receba dois n�meros e execute as opera��es listadas a seguir, de acordo com a escolha
do usu�rio.

EsCoLhA do usu�ri o oPErA��o
1 M�dia entre os n�meros digitados
2 Diferen�a do maior pelo menor
3 Produto entre os n�meros digitados
4 Divis�o do primeiro pelo segundo

Se a op��o digitada for inv�lida, mostre uma mensagem de erro e termine a execu��o do programa.
Lembre-se de que, na opera��o 4, o segundo n�mero deve ser diferente de zero.*/
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

