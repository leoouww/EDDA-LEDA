#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* 
	Lista Semana 2 - 
	LEONARDO RODRIGUES DE CASTRO
	PT3008479	
	
	3.	Considere o exemplo do exercício 2), aqui repetido, que retrata a sintaxe necessária para alocar
		memória a fim de armazenar um arranjo unidimensional (vetor) V de inteiros de N posições pelo uso
		de um ponteiro.

        int * V;
        V = (int *) calloc ( N, sizeof(int) );

	Com base nessa sintaxe, como seria a alocação de memória para um arranjo A que contivesse M ponteiros para inteiros? 
	Suponha que cada um dos ponteiros armazenados no arranjo A “aponte” para a sua própria região de N inteiros.
	Como seria a alocação de memória para a região “apontada” pelo ponteiro A[m]?
	A situação apresentada no item b) equivale, na prática, a armazenar uma matriz bidimensional A em áreas não adjacentes.
	Indique como seria possível usar a notação ponteiro-deslocamento para encontrar um elemento A[i][j] dessa matriz.
	Admita que os índices dos arranjos têm valor zero na primeira posição.
	Você acha que seria possível utilizar a notação ponteiro-índice neste caso?  Justifique.	

*/


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	//Declarando o arranjo A com M ponteiros para inteiros;
	int **A;
	int M, N;
	A = (int**)calloc(M,sizeof(int*));//alocação para o arranjo A com M ponteiros
	if(A != NULL){
		for(int i = 0; i < M; ++i)
			A[i] = (int*)calloc(N,sizeof(int));//Alocação para a região apomtada pelo ponteiro A[m]
		free(A);
	}
	
	//Para encontrar elemento dessa matriz utilizando ponteiro-deslocamento, usa-se a notação:
	//*(A[i] + j);
	
	//Sim, pois para acessar a primeira linha e a primeira coluna bastaria 
	//utilizar a notação A[0][0] e para a linha M e a coluna N, A[M-1][N-1]
	return 0;
}
