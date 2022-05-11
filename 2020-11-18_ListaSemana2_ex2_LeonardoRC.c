#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* 
	Lista Semana 2 - 
	LEONARDO RODRIGUES DE CASTRO
	PT3008479	
	
	2. A mem�ria necess�ria para armazenar um arranjo unidimensional (vetor) V de inteiros de N posi��es pode ser obtida pelo uso de um ponteiro, conforme o exemplo abaixo (ling. C).

        int * V;

        V = (int *) calloc ( N, sizeof(int) );

	Com base nessa sintaxe, como seria a aloca��o de mem�ria para um arranjo H que contivesse M elementos do tipo struct Hora (tal como definida acima) ? 
	Se no arranjo V voc� pode acessar o valor do i-�simo elemento por meio da nota��o ponteiro-�ndice (escrevendo V[i]), como voc� acessaria o valor dos minutos da i-�sima hora do arranjo H? 
	Repita o item b), utilizando a nota��o ponteiro-deslocamento.

	
*/

//Seria necess�ria a declara��o do modelo da struct Hora
struct Hora{
	int h, minuto, s;
};

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int M = 10, i=9;
	//Declarando a struct com M elementos e alocando espa�o na mem�ria
	struct Hora *pHora;
	pHora = (struct*)calloc(M,sizeof(struct Hora));
		
	//Acessando os minutos da i-�sima hora do arranjo pHora com ponteiro-�ndice
	pHora[i].minuto;
	
	//Acessando os minutos da i-�sima hora do arranjo pHora com ponteiro-deslocamento
	*(pHora.minuto+i);
	return 0;
}
