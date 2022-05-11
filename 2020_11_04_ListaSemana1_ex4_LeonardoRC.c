#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* 
	Lista Semana 1
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	4. O Maior
	
*/
int calcula_maior(int num1, int num2){
	return (num1 + num2 + abs(num1 - num2))/2;
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	int num1, num2, num3, maior;
	
	printf("\nDigite três números: ");
	scanf("%d%d%d", &num1, &num2, &num3);
	maior = calcula_maior(num1, num2);
	maior = calcula_maior(num3, maior);
	printf("\n%d eh o maior\n", maior);
	return 0;
}
