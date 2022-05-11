#include <stdio.h>
#include <stdlib.h>
#define TAM 10

/* 
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	1.  Um outro método de ordenação é a intercalação, que consiste em
	    analisar dois vetores já ordenados e obter um terceiro vetor,
		também ordenado, contendo todos os elementos do primeiro e todos 
		os elementos do segundo vetor. Escreva  um programa C que efetue
		o procedimento de ordenação por intercalação visando ordem crescente.
		
		Realize um teste com os dados abaixo.
		int V1[10] = { 2, 7,11,14,23,24,29,33,39,45};
		int V2[10] = { 2,17,21,22,23,28,35,42,55,59};

*/

int main(int argc, char *argv[]) {
	int V1[10] = { 2,7,11,14,23,24,29,33,39,45};
	int V2[10] = { 2,17,21,22,23,28,35,42,55,59};
	int *VTotal, i = 0, j = 0;
	
	
	while(i<TAM || j<TAM){
		if(V1[i] > V2[j]){
			VTotal = &V2[j];
			j++;
			++VTotal;
		}
		else{
			VTotal = &V1[i];
			++VTotal;
			i++;
		} 
	}
	i = 0;
	while(i < 20){
		printf(" %d ", VTotal[i]);
		++i;
	}
	return 0;
}
