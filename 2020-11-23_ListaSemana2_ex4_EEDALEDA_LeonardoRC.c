#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 50


/* 
	Lista Semana 2 - 
	LEONARDO RODRIGUES DE CASTRO
	PT3008479	
	
	4. Suponha que você precisa armazenar a lista de nomes dos seus colegas de classe.
	Com base no exercício 3) acima, como você faria isso utilizando arranjos alocados
	por ponteiros ?
	
*/

struct Lista_Alunos{
	char alunos[MAX];
};

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int qt_alunos;
	printf("\nQuantos alunos em sua sala de aula? ");
	scanf("%d", &qt_alunos);
	struct Lista_Alunos **nomes;
	nomes = (char**)calloc(qt_alunos,sizeof(char*));
	if(nomes != NULL){
		for(unsigned i = 0; i < qt_alunos;++i){
			nomes[i] = (char*)calloc(MAX,sizeof(char));
		}
		free(nomes);
	}
	return 0;
}
