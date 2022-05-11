#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
#define TAM 50

/*
	Ordene o vetor de ponteiros abaixo. Imprima todos os nomes ao final da ordenação.
	Escolha um desses algoritmos: bolha, inserção ou seleção.
	Não use vetores adicionais. 
	Não mova as strings propriamente ditas, somente os ponteiros.
	Sugestões:
	Use a função de biblioteca strcmp() para comparar as strings. 
	Defina uma função troca() para trocar dois ponteiros de lugar no vetor.
*/
/*
void troca(char *nomes[MAX]){
	char nome_maior[MAX];
	int ind_maior, tamanho = TAM, i, j;
	for(j = 0; j < tamanho; j++){
		for(i = 1; nomes[i] != NULL;i++){
			if(strcmp(nomes[i-1],nomes[i]) > 0){
				strcpy(nome_maior,nomes[i-1]);
				ind_maior = i-1;
			}
		}
		strcpy(nomes[ind_maior],nomes[i-1]);
		strcpy(nomes[i-1],nome_maior);
		tamanho--;
	}
}
*/
int main(int argc, char *argv[]) {
	char *nomes[] = { "Jader Thomé",
"Yasmin Xavier da Silva",
"Gustavo Moreira Peleje",
"Henrique Souza da Silva",
"Lais Santos de Souza",
"Nadjila Tejo Machado",
"Laura Bispo Paes Camargo",
"Alex Gonçalves Ikeda",
"Caillo Carvalho Santos",
"Nicolas dos Santos Felix",
"Luiz Henrique Marinelli dos Santos",
"Renan Costa Barbosa",
"Iago Vitor de Araujo",
"Leonardo Rodrigues de Castro",
"Danilo Yokoyama Matsura",
"Cleber André da Silva Pirone",
"Guilherme Farias Galletti",
"Dennis Jose Candido de Sa",
"Victor La Corte Evangelista",
"Mariana Pieslak Russo",
"Carolina de Faria Coutinho",
"Vinicius da Cruz Santos",
"Isabela Bianca Correa de Macedo",
"Julio Cesar Alves do Nascimento",
"Francisco Victor Santos Araujo",
"Thiago da Silva Ferreira",
"Fillipi Augusto Lucio",
"Maria Eduarda Leal Ferreira",
"Lorrans Matildes Facca",
"Bruno Coutinho",
"Eric Brito de Sousa",
"Douglas Henrique Alves Passos dos Santos",
"Vinicius Rodrigues Duarte",
"Marcus Vinicius Pereira Soares",
"Luis Antonio Nascimento Junior",
"Luccas Lopes Silva",
"Joao Pedro Soares Ferreira",
"Ana Carolina Cortez Alves",
"Renan Lima Guedes de Oliveira",
"Hariel Pereira Correia",
"Victor Paes Pó",
"Victor Carvalho Monteiro Jitsukawa",
"Nathalia Fonseca Bim",
"Thiago Bernardes Ribeiro",
"Djalma Paulo da Silva Neto",
"Adriano de Almeida Pereira",
"Guilherme Meconi Felix",
"Gabriel de Lima Barauna",
"Wesley Manha Reis"
};
	int i, j;

	for(aux = nomes; aux != NULL; aux->prox)
	/*
	troca(nomes);
	int i = 0;
	do{
		printf("%do - %s\n", i+1, nomes[i]);
		++i;
	}while(nomes[i] != NULL);
	*/return 0;
}
