#include <stdio.h>
#include <math.h>
/*Uma empresa decide dar um aumento de 30% aos funcion�rios com sal�rios inferiores a R$ 500,00. Fa�a um
programa que receba o sal�rio do funcion�rio e mostre o valor do sal�rio reajustado ou uma mensagem, caso
ele n�o tenha direito ao aumento.*/
int main(){
	
	float salario;
	
	printf("Insira o valor do salario: \n");
	scanf("%f", &salario);
	
	if(salario < 500){
		printf("Salrio reajustado e: %f\n", (salario * 30)/ 100 + salario);
	}else printf("Sem direito a aumento\n");
	
	return 0;
}
