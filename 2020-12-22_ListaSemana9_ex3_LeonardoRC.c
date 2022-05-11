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

Lista* inicializa(void){
	return NULL;
}

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
Lista* insere_valor(Lista *l,int valor){
	Lista* novo;
	
	novo = (Lista*)malloc(sizeof(Lista));
	if(novo == NULL)
		return NULL;
	if(l == NULL){
		novo->dado = valor;
		novo->anterior = novo->proximo = NULL;
		l = novo;
	}
	else{
		novo->dado = valor;
		novo->anterior = NULL;
		novo->proximo = l;
	//	*(l-1)->anterior = novo;
	}
	return novo;
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	//Lista list_enc;
	char continuar = 's';
	int dado;
	
	Lista list_enc = inicializa();
	while(continuar == 's'){
		printf("\nInsira um valor à lista: ");
		scanf("%d",&dado);
		list_enc = insere_valor(list_enc,dado);
		fflush(stdin);
		printf("\nDeseja continuar inserindo dados à lista? \n[s] - caso, sim\n[n] - caso não\n");
		scanf("%c",&continuar);
	}
	printf("\nQual elemento buscar?");
	scanf("%d", &dado);
//	busca_elemento(list_enc,dado);
	return 0;
}
