#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* 
	Lista Semana 9
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	3. Escreva uma função que faça uma busca em uma lista duplamente encadeada.
	
*/

struct lista{
	int dado;
	struct lista *anterior;
	struct lista *proximo;
};

typedef struct lista Lista; //definição do tipo Lista a partir do tipo 'struct lista'
//typedef Lista *PtrLista;     //definição do tipo PtrLista a partir do tipo 'struct Lista'

/*void busca_elemento(PtrLista *l,int valor){
	int elemento;
	for(elemento = 0; l->proximo != NULL;l++){
		if(l->dado == valor){
			printf("\nElemento está na lista!");
			elemento++;
			break;
			elemento->anterior = l->anterior;
			elemento->proximo = l->proximo;
			elemento->dado = l->dado;
			return elemento;
		}
	}
	if(elemento == 0)
		printf("\nElemento NÃO está na lista!\n");
}
*/
void insere_valor(Lista *l,int valor){
	Lista *novo;
	
	novo = (Lista*)malloc(sizeof(Lista));
	if(novo == NULL)
		return;
	if(*l == NULL){
		novo->dado = valor;
		novo->anterior = novo->proximo = NULL;
		*l = novo;
	}
	else{
		novo->dado = valor;
		novo->anterior = NULL;
		novo->proximo = *l;
		(*l)->anterior = novo;
	}
	*l = novo;
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	Lista *list_enc = NULL;
	char continuar = 's';
	int dado;
	
	while(continuar == 's'){
		printf("\nInsira um valor à lista: ");
		scanf("%d",&dado);
		insere_valor(list_enc,dado);
		printf("\nDeseja continuar inserindo dados à lista? [n] - caso não\n");
		fflush(stdin);
		scanf("%c",&continuar);
	}
	printf("\nQual elemento buscar?");
	scanf("%d", &dado);
//	busca_elemento(list_enc,dado);
	return 0;
}
