#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define TAM 2
#define DUO 2
#define APROVACAO 6
#define MAX 50

/* 
	Lista Semana 1 - Estrutura de Dados
	LEONARDO RODRIGUES DE CASTRO
	PT3008479	
	
	1.Crie uma estrutura representando os alunos do curso de Estrutura de Dados. A estrutura deve
	conter o número de matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e
	nota da terceira prova.
	
	(a) permita ao usuário entrar com os dados de 5 alunos (vetor).
	(b) encontre o aluno com maior nota da primeira prova.
	(c) encontre o aluno com maior média geral.
	(d) encontre o aluno com menor média geral
	(e) para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
	aprovação.
	
*/
struct Aluno{
	int matricula;
	char nome[MAX];
	double n1, n2, n3;
};

void limpaBuffer() {
	char c;
	while ((c = getchar()) != '\n' );		
}

void preenche_dados(struct Aluno a[TAM]){
   for(int i=0; i<TAM; ++i){ 
      printf("\nDigite o número de matrícula do %do aluno: ", i+1);
      scanf("%d", &a[i].matricula);
    limpaBuffer();
      printf("\nNome do %do aluno: ",i+1);
      fgets(a[i].nome,MAX,stdin);
      printf("\nNotas (1, 2 , 3) do %do aluno: ",i+1);
      scanf("%lf%lf%lf",&a[i].n1, &a[i].n2, &a[i].n3);
   }
}


struct Aluno maior_n1(struct Aluno a[TAM]){
    int i=0;
    struct Aluno maior_nota1 = a[i];
    i++;
	do {
       if(a[i].n1 > maior_nota1.n1){
        	maior_nota1.n1 = a[i].n1; 
      		maior_nota1.matricula = a[i].matricula;
			strcpy(maior_nota1.nome,a[i].nome);
			maior_nota1.n2 = a[i].n2;
			maior_nota1.n3 = a[i].n3;
	   }
  		++i;   
	 }while(i<TAM);
     return maior_nota1;
}

struct Aluno dados_maior_media(struct Aluno alunos[TAM]){
	struct Aluno m_media;
	double media, maior_media;
	
	for(unsigned i = 0; i < TAM; ++i){
		media = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3)/3;
		if(i == 0 || maior_media < media){
			maior_media = media;
			m_media = alunos[i];
		}
	}
	return m_media;
}

struct Aluno dados_menor_media(struct Aluno alunos[TAM]){
	struct Aluno m_media;
	double media, menor_media;
	
	for(unsigned i = 0; i < TAM; ++i){
		media = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3)/3;
		if(i == 0 || menor_media > media){
			menor_media = media;
			m_media = alunos[i];
		}
	}
	return m_media;
}

void aprovado(struct Aluno alunos){
	double media;
	
	media = (alunos.n1 + alunos.n2 + alunos.n3)/3;
	if(media >= APROVACAO){
		printf("\n%s - APROVADO(A)!", alunos.nome);
	}
	else printf("\n%s - REPROVADO(A)!", alunos.nome);
}


void imprimir_informacoes(struct Aluno dados){
	printf("\nNo Mat: %d\nNome: %s	\nNota1: %lf\nNota2: %lf\nNota3: %lf\n", dados.matricula, dados.nome, dados.n1, dados.n2, dados.n3);
}


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	struct Aluno alunos[TAM];//Vetor do tipo registro Aluno que armazenará os dados digitados pelo usuário
	struct Aluno m_n1; //Variável do tipo Aluno que armazenará os dados do aluno que obtiver maior nota na  primeira prova 
	struct Aluno maior_media, menor_media;//Variável do tipo vetor Aluno que vai armazenar os dados daquele com menor média de notas e maior respectivamente
	
	preenche_dados(alunos); //Procedimento no qual os dados dos aluno serão inseridos via teclado pelo usuário 
	
	m_n1 = maior_n1(alunos); //Encontrando o aluno com maior nota da primeira avaliação
	printf("\nDados do aluno com maior nota na primeira avaliação: \n");
	imprimir_informacoes(m_n1);
	
	maior_media = dados_maior_media(alunos);//Encontrando o aluno com maior média de provas
	printf("\nAluno com maior média:\n");
	imprimir_informacoes(maior_media);
	
	menor_media = dados_menor_media(alunos);//Encontrando o aluno com menor média de provas
	printf("\nAluno com menor média:\n");
	imprimir_informacoes(menor_media);
	
	for(unsigned i = 0; i < TAM; ++i){
		aprovado(alunos[i]);
	}
	
	return 0;
}
