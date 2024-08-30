#include <stdio.h>

int main()
{
	int num1=0, num2=1,soma=0,valor;
	printf("Digite um valor para verificar se existe na sequencia: ");
	scanf("%d",&valor);
	if(valor==0 || valor == 1){
		printf("Valor existe na sequencia\n");
		return 0;
	}
	while(soma<valor)
	{
		soma=num1+num2;
		num1=num2;
		num2=soma;
	}
	if(soma==valor)
		printf("\nValor existe na sequencia\n");
	else
		printf("Valor nao existe na sequencia");
}