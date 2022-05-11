#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 30
#define COMISSAO 0.15

/* 
	Lista Semana 1
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	3. Salário com bônus
	
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	char nome[TAM];
	double t_vendas, s_fixo;
	
	fflush(stdin);
	printf("\nNome do funcionário: ");
	scanf("%s", nome);
	printf("\nSalário fixo: ");
	scanf("%lf", &s_fixo);
	printf("\nTotal de vendas no mês em dinheiro: ");
	scanf("%lf", &t_vendas);
	printf("\nTOTAL = R$%.2lf\n", s_fixo + t_vendas*COMISSAO);
	return 0;
}
