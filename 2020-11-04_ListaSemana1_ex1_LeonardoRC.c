#include <stdio.h>
#define PI 3.14159
#include <locale.h>
/*
	Lista Semana 1
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	1. Calculo da area de uma circunfer�ncia
	
*/ 
 
int main() {
	setlocale(LC_ALL,"");
 	double raio;
 	
 	printf("\nEntre com o valor do raio da circunfer�ncia: \n");
 	scanf("%lf", &raio);
 	printf("\nA=%.4lf\n", raio*raio*PI);
    return 0;
}
