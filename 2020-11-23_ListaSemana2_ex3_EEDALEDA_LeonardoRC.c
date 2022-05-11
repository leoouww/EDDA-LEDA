#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* 
	Lista Semana 2 - 
	LEONARDO RODRIGUES DE CASTRO
	PT3008479	
	
	3.	Considere o exemplo do exerc�cio 2), aqui repetido, que retrata a sintaxe necess�ria para alocar
		mem�ria a fim de armazenar um arranjo unidimensional (vetor) V de inteiros de N posi��es pelo uso
		de um ponteiro.

        int * V;
        V = (int *) calloc ( N, sizeof(int) );

	Com base nessa sintaxe, como seria a aloca��o de mem�ria para um arranjo A que contivesse M ponteiros para inteiros? 
	Suponha que cada um dos ponteiros armazenados no arranjo A �aponte� para a sua pr�pria regi�o de N inteiros.
	Como seria a aloca��o de mem�ria para a regi�o �apontada� pelo ponteiro A[m]?
	A situa��o apresentada no item b) equivale, na pr�tica, a armazenar uma matriz bidimensional A em �reas n�o adjacentes.
	Indique como seria poss�vel usar a nota��o ponteiro-deslocamento para encontrar um elemento A[i][j] dessa matriz.
	Admita que os �ndices dos arranjos t�m valor zero na primeira posi��o.
	Voc� acha que seria poss�vel utilizar a nota��o ponteiro-�ndice neste caso?  Justifique.	

*/


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	//Declarando o arranjo A com M ponteiros para inteiros;
	int **A;
	int M, N;
	A = (int**)calloc(M,sizeof(int*));//aloca��o para o arranjo A com M ponteiros
	if(A != NULL){
		for(int i = 0; i < M; ++i)
			A[i] = (int*)calloc(N,sizeof(int));//Aloca��o para a regi�o apomtada pelo ponteiro A[m]
		free(A);
	}
	
	//Para encontrar elemento dessa matriz utilizando ponteiro-deslocamento, usa-se a nota��o:
	//*(A[i] + j);
	
	//Sim, pois para acessar a primeira linha e a primeira coluna bastaria 
	//utilizar a nota��o A[0][0] e para a linha M e a coluna N, A[M-1][N-1]
	return 0;
}
