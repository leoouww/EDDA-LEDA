#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10
#define LIM 50


/* 
	Lista Semana 1
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	5. Preenchimento do Vetor I
	
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	int vetor[TAM], i = 0;
	
	while(1==1){
		printf("\nDigite o primeiro valor do vetor: ");
		scanf("%d", &vetor[i]);
		if(vetor[i] <= LIM)
			break;
	}
	do{
		++i;
		vetor[i] = 2*vetor[i-1];
	}while(i < TAM);
	for(i = 0; i < TAM; ++i)
		printf("\nN[%d] = %d", i, vetor[i]);
	return 0;
}
