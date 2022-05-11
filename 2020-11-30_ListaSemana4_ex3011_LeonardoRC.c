#include <stdio.h>
#include <stdlib.h>
#define TAM 5

/* 
	LEONARDO RODRIGUES DE CASTRO
	PT3008479	
	EXERCÍCIO:Implemente em linguagem C um dos algoritmos de ordenação apresentados na aula.
	
	Para tanto, foi escolhido o método do Buble Sort a ser implementado
*/

void bubble_sort(int v[TAM], int tamanho){
	int tam = tamanho;
	for(unsigned i = 0; i < tam; ++i){
		for(int j = 1; j < tam; ++j){
			if(v[j-1] > v[j]){
				int temp = v[j-1];
				v[j-1] = v[j];
				v[j] = temp;
			}
		}
		tam--;	
	}
}

int main(int argc, char *argv[]) {
	int vetor[] = {0,120,121,2,3};
	
	for(int i = 0; i < TAM; i++)
		printf("  %d  ", vetor[i]);
	bubble_sort(vetor, TAM);
	printf("\n");
	for(int i = 0; i < TAM; i++)
		printf("  %d  ", vetor[i]);
	return 0;
}
