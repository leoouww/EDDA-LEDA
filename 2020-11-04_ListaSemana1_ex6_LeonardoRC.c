#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 20



/* 
	Lista Semana 1
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	6. Troca em Vetor I
	
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	int vetor[TAM], i, j, aux;
	
	for(i = 0; i < TAM; ++i){ //Inicializando vetor de 20 posições
		printf("\n%do Valor: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	for(i = 0, j = TAM - 1; i < (TAM/2); ++i, --j){ //Trocando elementos no vetor
		aux = vetor[i];
		vetor[i] = vetor[j];
		vetor[j] = aux;
	}
	for(i = 0; i < TAM; ++i) //Imprimindo vetor alterado
		printf("\nN[%d] = %d", i, vetor[i]);
	return 0;
}
