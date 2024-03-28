#include <stdio.h>
/*Faça um programa que receba:
¦¦ o código do produto comprado; e
¦¦ a quantidade comprada do produto.
Calcule e mostre:
¦¦ o preço unitário do produto comprado, seguindo a Tabela I;
¦¦ o preço total da nota;
¦¦ o valor do desconto, seguindo a Tabela II e aplicado sobre o preço total da nota; e
¦¦ o preço final da nota depois do desconto.

TABELA I
Código PrEço
1 a 10 R$ 10,00
11 a 20 R$ 15,00
21 a 30 R$ 20,00
31 a 40 R$ 30,00

TABELA II

PrEço ToTAL dA NoTA % dE dEsCoNTo
Até R$ 250,00 5%
Entre R$ 250,00 e R$ 500,00 10%
Acima de R$ 500,00 15%*/
int main(){
	int codigoPro,quantiPro;
	float precoT, valorDes, precoF, precoU;
	
	printf("Digite o codigo do produto de acordo a tabela I, 1-40\n");
	scanf("%d",&codigoPro);
	printf("Digite a quantidade comprada do produto\n");
	scanf("%d", &quantiPro);
	
	if(codigoPro>=1 && codigoPro<=10){
		(precoU=10);
	printf("O preco unitario do do prduto e: %.2f\nO preco total da nota sera: %.2f\n", precoU, precoT=(precoU*quantiPro));
	}else if(codigoPro>=11 && codigoPro<=20){
		(precoU=15);
	printf("O preco unitario do do prduto e: %.2f\nO preco total da nota sera: %.2f\n", precoU, precoT=(precoU*quantiPro));
}else if(codigoPro>=21 && codigoPro<=30){
		(precoU=20);
	printf("O preco unitario do do prduto e: %.2f\nO preco total da nota sera: %.2f\n", precoU, precoT=(precoU*quantiPro));
}else if(codigoPro>=31 && codigoPro<=40){
		(precoU=30);
	printf("O preco unitario do do prduto e: %.2f\nO preco total da nota sera: %.2f\n", precoU, precoT=(precoU*quantiPro));
}
   if(precoT<250){
   	printf("O valor do desconto foi: %.2f\n", valorDes=(precoT*5)/100);
   	printf("O valor final da nota com desconto: %.2f\n", precoF = (precoT - valorDes));
   }else if(precoT>=250 && precoT<500){
   	printf("O valor do desconto foi: %.2f\n", valorDes=(precoT*10)/100);
   	printf("O valor final da nota com desconto: %.2f\n", precoF = (precoT - valorDes));
}else if(precoT>500){
   	printf("O valor do desconto foi: %.2f\n", valorDes=(precoT*15)/100);
   	printf("O valor final da nota com desconto: %.2f\n", precoF = (precoT - valorDes));
   }
	return 0;
	
}
