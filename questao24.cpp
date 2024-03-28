#include <stdio.h>

/*Fa�a um programa que receba o pre�o, a categoria (1 � limpeza; 2 � alimenta��o; ou 3 � vestu�rio)

e a situa��o (R � produtos que necessitam de refrigera��o; e N � produtos que n�o necessitam de re-
frigera��o).

Calcule e mostre:
�� O valor do aumento, usando as regras que se seguem.

PrE�o CATEgori A PErCENTuAL dE AuMENTo
< = 25

1 5%
2 8%
3 10%

> 25

1 12%
2 15%
3 18%

�� O valor do imposto, usando as regras a seguir.
O produto que preencher pelo menos um dos seguintes requisitos pagar� imposto equivalente a 5%
do pre�o; caso contr�rio, pagar� 8%. Os requisitos s�o:
Categoria: 2
Situa��o: R
�� O novo pre�o, ou seja, o pre�o mais aumento menos imposto.
�� A classifica��o, usando as regras a seguir.

NoVo PrE�o CLAssiFiCA��o
< = R$ 50,00 Barato
Entre R$ 50,00 e R$ 120,00 Normal
> = R$ 120,00 Caro*/
int main (){
	float preco, aumento, novoPreco, imposto, precoF;
	int categoria;
	char situacao;
	
	
	printf("Digite o preco: \n");
	scanf("%f", &preco);
	printf("Insira a categoria(1-Limpeza; 2-Alimentacao; 3-Vestuario); \n");
	scanf("%d", &categoria);
	printf("Insira a situacao(R-Produtos que necessitam de refrigeracao; N-Produtos que nao necessitam de refrigeracao):\n");
	scanf(" %c", &situacao);
	
	if( preco <= 25 && categoria == 1 && situacao=='R'){
		printf("O  aumento sera: %.2f\n'Limpeza' 'Refrigeracao' ", aumento=(preco * 0.05));
	}else if( preco <= 25 && categoria == 1 && situacao=='N'){
		printf("O aumento sera: %.2f\n'Limpeza' ' Sem Refrigeracao' ",aumento=(preco * 0.05));
	}else if( preco <= 25 && categoria == 2 && situacao=='R'){
		printf("O aumento sera: %.2f\n'Alimentacao' 'Refrigeracao' ",aumento=(preco * 0.08));
	}else if( preco <= 25 && categoria == 2 && situacao=='N'){
		printf("O aumento sera: %.2f\n'Alimentacao' 'Sem Refrigeracao' ", aumento=(preco * 0.08));
	}else if( preco <= 25 && categoria == 3 && situacao=='R'){
		printf("O aumento sera: %.2f\n'Vestuario' 'Refrigeracao' ", aumento=(preco * 0.10));
	}else if( preco <= 25 && categoria == 3 && situacao=='N'){
		printf("O aumento sera: %.2f\n'Vestuario' 'Sem Refrigeracao' ", aumento=(preco * 0.10));
	}if( preco > 25 && categoria == 1 && situacao=='R'){
		printf("O aumento sera: %.2f\n'Limpeza' 'Refrigeracao' ", aumento=(preco * 0.12));
	}else if( preco > 25 && categoria == 1 && situacao=='N'){
		printf("O aumento sera: %.2f\n'Limpeza' ' Sem Refrigeracao' ",aumento=(preco * 0.12));
	}else if( preco > 25 && categoria == 2 && situacao=='R'){
		printf("O aumento sera: %.2f\n'Alimentacao' 'Refrigeracao' ", aumento=(preco * 0.15));
	}else if( preco > 25 && categoria == 2 && situacao=='N'){
		printf("O aumento sera: %.2f\n'Alimentacao' 'Sem Refrigeracao' ", aumento=(preco * 0.15));
	}else if( preco > 25 && categoria == 3 && situacao=='R'){
		printf("O aumento sera: %.2f\n'Vestuario' 'Refrigeracao'\n ", aumento=(preco * 0.18));
	}else if( preco > 25 && categoria == 3 && situacao=='N'){
		printf("O aumento sera: %.2f\n'Vestuario' 'Sem Refrigeracao' \n",aumento=(preco * 0.18));
	}else if(categoria!=2 || situacao!= 'R'){
		printf("O imposto sera: %.2f\n", imposto = (preco*0.05));
	}else if(categoria==2 || situacao== 'R'){
	printf("O imposto sera: %.2f\n", imposto= (preco*0.08));	
	}
	printf("O novo preco sera: %.2f\n", novoPreco = preco+aumento-(imposto));
  if(novoPreco<=50){
	printf("Barato\n");
}else if(novoPreco>50 && novoPreco<120){
	printf("Normal\n");
}else if(novoPreco>=120){
	printf("Caro\n");
}
	return 0;
}


