#include <stdio.h>
#include <math.h>

/*Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. Faça
um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a
seguir. Mostre o saldo médio e o valor do crédito.
sALdo Médio PErCENTuAL
Acima de R$ 400,00 30% do saldo médio
R$ 400,00 R$ 300,00 25% do saldo médio
R$ 300,00 R$ 200,00 20% do saldo médio
Até R$ 200,00 10% do saldo médio*/
int main(){
	
	float saldoMedio, credito;
	
	printf("Insira o valor do saldo medio: \n");
	scanf("%f", &saldoMedio);

	
	if(saldoMedio > 400){
		printf("De acordo com o saldo medio = %.2f\nO valor do credito sera = %.2f", saldoMedio, (credito = (saldoMedio * 30)/100));
		}else if(saldoMedio < 400 && saldoMedio >=300){
		printf("De acordo com o saldo medio = %.2f\nO valor do credito sera = %.2f", saldoMedio, (credito = (saldoMedio * 25)/100));
		}else if(saldoMedio < 300 && saldoMedio >= 200){
		printf("De acordo com o saldo medio = %.2f\n0 valor do credito sera = %.2f", saldoMedio, (credito = (saldoMedio * 20)/100));
		}else if(saldoMedio < 200){
		printf("De acordo com o saldo medio = %.2f\nO valor do credito sera = %.2f", saldoMedio, (credito = (saldoMedio * 10)/100));
		}
			
	return 0;
}
