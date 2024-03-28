#include <stdio.h>
#include <math.h>
/*Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com a
escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do
programa. As opções são:
a) O primeiro número elevado ao segundo número.
b) Raiz quadrada de cada um dos números.
c) Raiz cúbica de cada um dos números.*/

int main(){
	
	float n1, n2, op;
	
	printf("Digite o primeiro numero: \n");
	scanf("%f", &n1);
	printf("Digite o segundo numero: \n");
	scanf("%f", &n2);
	printf("Digite a alternativa, 1-2-3: \n");
	scanf("%f", &op);
	
	if(op ==1){
		printf("O primeiro numero elevado ao segundo e: %.2f\n", pow(n1,n2));
	}else if (op ==2){
		printf("A raiz quadrada de cada numero e: %.2f, %.2f", sqrt(n1), sqrt(n2));
	}else if(op ==3){
		printf("A raiz cubica de cada numero e: %.2f, %.2f", cbrt(n1), cbrt(n2));
	
	}else{
		printf("Operacao invalida");
	}
	return 0;
	
}
