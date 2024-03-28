#include <stdio.h>
/*Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir. Faça um pro-
grama que receba o tipo de investimento e seu valor, calcule e mostre o valor corrigido após um mês de

investimento, de acordo com o tipo de investimento.

TiPo dEsCri ção rENdiMENTo MENsAL
1 Poupança 3%
2 Fundos de renda fixa 4%*/
int main(){
	float valor, valorCorrig; 
	int tipoInv;
	printf("Digite o valor do investimento:\n");
	scanf("%f", &valor);
	printf("Digite 1 para popanca ou 2 para fundos renda fixa: \n");
	scanf("%d", &tipoInv);
	
	if(tipoInv ==1){
		printf("O valor do investimento apos um mes sera: %.2f\n", valorCorrig = valor +(valor * 3)/100);
	}else if(tipoInv ==2){
		printf("O valor do investimento apos um mes sera: %.2f\n", valorCorrig = valor + (valor * 4)/100);
	}
	return 0;
}
