#include <stdio.h>
/*Fa�a um programa que verifique a validade de uma senha fornecida pelo usu�rio. A senha � 4531. O
programa deve mostrar uma mensagem de permiss�o de acesso ou n�o.*/
int main(){
	int senha;
	printf("Digite a senha:\n");
	scanf("%d", &senha);
	
	if(senha ==4531){
		printf("Acesso permitido!\n");
	}else{
		printf("Acesso negado!\n");
	}
	return 0;
}
