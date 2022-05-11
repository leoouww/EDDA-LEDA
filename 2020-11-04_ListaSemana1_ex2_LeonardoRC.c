#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	Lista Semana 1
	LEONARDO RODRIGUES DE CASTRO
	PT3008479		
	
	2. Calculo do salario de um funcionário
	
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	int num_func, horas_tra;
	double valor_hora, salario;
	
	printf("\nPor gentileza, informe o número do funcionário: ");
	scanf("%d", &num_func);
	printf("\nDiga a quantidade de horas trabalhadas pelo funcionário %d: ", num_func);
	scanf("%d", &horas_tra);
	printf("\nQual o valor da hora trabalhada do funcionário %d: ", num_func);
	scanf("%lf", &valor_hora);
	salario = horas_tra*valor_hora;
	printf("\nNUMBER = %d\nSALARY = U$%.2lf\n", num_func, salario);
	return 0;
}
