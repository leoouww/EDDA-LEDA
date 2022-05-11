#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#define TAM 12



/* 
	Lista Semana 1
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	7. Coluna na Matriz
	
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	int i, j, coluna;
	double matriz[TAM][TAM], saida = 0.0;
	char operacao;
	
	for(i = 0; i < TAM; i++){ //Inicializando a matriz com os valores
		for(j = 0; j < TAM; j++){
			printf("\nDigite o elemento da linha %d x coluna %d: ", i, j);
			scanf("%lf", &matriz[i][j]);
		}
	}
	printf("\nColuna escolhida para a operação: ");
	scanf("%d", &coluna);
	fflush(stdin);
	printf("\nOperador escolhido (S para soma ou M para média): ");
	scanf("%c", &operacao);
	operacao = toupper(operacao);
	for(i = 0; i < TAM; ++i)
		saida += matriz[i][coluna];
	if(operacao == 'M')
		saida = saida / TAM;
	printf("%.1lf", saida);
	return 0;
}
