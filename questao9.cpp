#include <stdio.h>
#include <math.h>

/*Um banco conceder� um cr�dito especial aos seus clientes, de acordo com o saldo m�dio no �ltimo ano. Fa�a
um programa que receba o saldo m�dio de um cliente e calcule o valor do cr�dito, de acordo com a tabela a
seguir. Mostre o saldo m�dio e o valor do cr�dito.
sALdo M�dio PErCENTuAL
Acima de R$ 400,00 30% do saldo m�dio
R$ 400,00 R$ 300,00 25% do saldo m�dio
R$ 300,00 R$ 200,00 20% do saldo m�dio
At� R$ 200,00 10% do saldo m�dio*/
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
