#include <stdio.h>
/*Uma empresa decidiu dar uma gratifica��o de Natal a seus funcion�rios, baseada no n�mero de horas
extras e no n�mero de horas que o funcion�rio faltou ao trabalho. O valor do pr�mio � obtido pela con-
sulta � tabela que se segue, na qual:

H = n�mero de horas extras � (2/3 * (n�mero de horas falta))
h (MiNuTos) Pr�Mio (r$)
> = 2.400 500,00
1.800 2.400 400,00
1.200 1.800 300,00
600 1.200 200,00
< 600 100,00*/
int main(){
int horasExt, horasFalt, gratifica;
float h;

printf("Insira o numero de horas extras: \n");
scanf("%d", &horasExt);
printf("Insira o numero de horas faltas: \n");
scanf("%d", &horasFalt);

h=horasExt - (2/3*(horasFalt));

if(h<600){
	printf("O premio sera: R$ 100 \n ", h);
}else if(h>=600 && h<1200){
	printf("O premio sera: R$ 200 \n ", h);
}else if(h>=1200 && h<1800){
	printf("O premio sera: R$ 300 \n ", h);
}else if(h>=1800 && h<2400){
	printf("O premio sera: R$ 400 \n ", h);
}else if(h>2400){
	printf("O premio sera: R$ 500 \n ", h);
}
return 0;
}
