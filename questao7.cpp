#include <stdio.h>
#include <math.h>
/*Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um
programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso
ele não tenha direito ao aumento.*/
int main(){
	
	float salario;
	
	printf("Insira o valor do salario: \n");
	scanf("%f", &salario);
	
	if(salario < 500){
		printf("Salrio reajustado e: %f\n", (salario * 30)/ 100 + salario);
	}else printf("Sem direito a aumento\n");
	
	return 0;
}
