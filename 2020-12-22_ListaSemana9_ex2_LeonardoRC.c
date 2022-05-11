#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	Lista Semana 9
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	2. Escreva uma fun��o que verifique se uma lista 
	   encadeada que cont�m n�meros inteiros est� em ordem 
	   crescente.
		
*/

struct lista{
	int dado;
	struct lista* prox; 
};
typedef struct lista Lista;

Lista* inicializa(void){
	return NULL;
}

Lista* insere(int valor, Lista* l){
	Lista* novo;
	novo = (Lista*)malloc(sizeof(Lista));
	novo->dado = valor;
	novo->prox = l;
	return novo; 
}

void ordem_crescente(Lista* l){
	Lista* anterior;
	Lista* posterior;

	posterior = l;
	posterior = posterior->prox;
	for(anterior = l; posterior != NULL; anterior = anterior->prox, posterior = posterior->prox){
		if(anterior->dado > posterior->dado){
			printf("\nA lista encadeada fornecida N�O EST� em ordem crescente!\n");
			break;
		}
	}
	if(posterior == NULL)
		printf("\nA lista encadeada fornecida EST� em ordem crescente!!");
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	Lista* l;
	int valor = -1;
	
	l = inicializa();
	while(valor != 0){
		printf("\nInsira um n�mero � lista:");
		scanf("%d", &valor);
		l = insere(valor, l);
	}
	ordem_crescente(l);
	return 0;
}
