#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

/* 
	Lista Semana 9
	LEONARDO RODRIGUES DE CASTRO
	PT3008479
	
	4. Faça um programa com as seguintes funções para uma lista simplesmente encadeada:

	a.Inserir no início
	b.Inserir no final
	c.Remover no início
	d.Remover no final
	e.Contar a quantidade de elementos da lista
	f.Buscar um elemento da lista
	g.Exibir todos os elementos da lista
		
*/

struct lista{
	int dado;
	struct lista* prox; 
};
typedef struct lista Lista;

Lista* inicializa(void){
	return NULL;
}


void insere_inicio(int valor, Lista* l){
	Lista* novo;
	novo = (Lista*)calloc(1,sizeof(Lista));
	if(novo == NULL){
		printf("Erro ao criar nova Lista ");
		return;
	}else{	
		novo->dado = valor;
		novo->prox = l;
		l = novo; 
	}	
}
void insere_final(int valor, Lista* l){
	Lista* novo;
	novo = (Lista*)calloc(1,sizeof(Lista));
	if(novo == NULL){
		printf("Erro ao criar nova Lista ");
		return;
	}else{	
		novo->dado = valor;
		novo->prox = NULL;
		Lista *ultimo = l;
		while(ultimo->prox != NULL)
			ultimo = ultimo->prox;
		ultimo->prox = novo; 
	}
}

void remover_inicio(Lista* l){
	if(l == NULL)
		printf("\nLista Vazia!\n");
	else{
		Lista* atual = l;
		l = atual->prox;
		free(atual);
	}
}

void remover_final(Lista* l){
	if(l == NULL)
		printf("\nLista Vazia!\n");
	else{
		Lista* atual = l;
		Lista* anterior;
		while(atual->prox != NULL){
			anterior = atual;
			atual = atual->prox;
		}
		anterior->prox = NULL;
		free(atual);
	}
}

void contar_elementos(Lista* l){
	int qtd = 0;
	if(l == NULL){
		printf("\nLista Vazia!");
	}
	else{
		Lista* aux = l;
		while(aux->prox != NULL){
			aux = aux->prox;
			qtd++;
		}
	}
	printf("\nA lista contem %d elemento(s)\n", qtd);
}

int buscar_elemento(int valor, Lista* l){
	if(l == NULL){
		printf("\nLista vazia\n");
		return 0;
	}
	else{
		Lista* aux = l;
		while(aux->prox != NULL){
			if(aux->dado == valor)
				return aux->dado;
			aux = aux->prox;
		}
	}
	printf("\nElemento %d não pertence à Lista", valor);
	return 0;
}

void exibir_lista(Lista* lista){
	Lista* l = lista;
	while(l->prox != NULL){
		printf("\nValor: %d", l->dado);
		l = l->prox;
	}
	//printf("\nValor: %d", l->dado);
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	Lista* l;
	l = inicializa();
	char opcao;
	int valor;
	int continuar = 1;
	
	while(continuar != 0){
		printf("\nEscolha a opção desejada abaixo:\n");
		printf("\n(A) Inserir no início;");
		printf("\n(B) Inserir no final;");
		printf("\n(C) Remover no início;");
		printf("\n(D) Remover no final;");
		printf("\n(E) Contar a quantidade de elementos da lista;");
		printf("\n(F) Buscar um elemento da lista;");
		printf("\n(G) Exibir todos os elementos da lista.\n");
		fflush(stdin);
		scanf("%c", &opcao);
		switch(opcao){
		case 'A':
			printf("\nDigite o valor que se deseja inserir ao início da lista: ");
			scanf("%d", &valor);
			insere_inicio(valor,l);
			break;
		case 'B':
			printf("\nDigite o valor que se deseja inserir ao final da lista: ");
			scanf("%d", &valor);
			insere_final(valor,l);
			break;
		case 'C':
			remover_inicio(l);
			break;
		case 'D':
			remover_final(l);
			break;
		case 'E':
			contar_elementos(l);
			break;
		case 'F':
			printf("\nDigite o valor que se deseja buscar na lista: ");
			scanf("%d", &valor);
			int elemento;
			elemento = buscar_elemento(valor, l);
			printf("\n%d", elemento);
			break;
		case 'G':
			exibir_lista(l);
			break;
		default:
			printf("\nOpção inálida!");
		}
		exibir_lista(l);
		system("CLS");
		printf("\nDigite zero [0] para encerrar!");
		scanf("%d", &continuar);
	}
	exibir_lista(l);
	return 0;
}
