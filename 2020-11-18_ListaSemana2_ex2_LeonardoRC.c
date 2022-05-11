#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* 
	Lista Semana 2 - 
	LEONARDO RODRIGUES DE CASTRO
	PT3008479	
	
	2. A memória necessária para armazenar um arranjo unidimensional (vetor) V de inteiros de N posições pode ser obtida pelo uso de um ponteiro, conforme o exemplo abaixo (ling. C).

        int * V;

        V = (int *) calloc ( N, sizeof(int) );

	Com base nessa sintaxe, como seria a alocação de memória para um arranjo H que contivesse M elementos do tipo struct Hora (tal como definida acima) ? 
	Se no arranjo V você pode acessar o valor do i-ésimo elemento por meio da notação ponteiro-índice (escrevendo V[i]), como você acessaria o valor dos minutos da i-ésima hora do arranjo H? 
	Repita o item b), utilizando a notação ponteiro-deslocamento.

	
*/

//Seria necessária a declaração do modelo da struct Hora
struct Hora{
	int h, minuto, s;
};

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int M = 10, i=9;
	//Declarando a struct com M elementos e alocando espaço na memória
	struct Hora *pHora;
	pHora = (struct*)calloc(M,sizeof(struct Hora));
		
	//Acessando os minutos da i-ésima hora do arranjo pHora com ponteiro-índice
	pHora[i].minuto;
	
	//Acessando os minutos da i-ésima hora do arranjo pHora com ponteiro-deslocamento
	*(pHora.minuto+i);
	return 0;
}
