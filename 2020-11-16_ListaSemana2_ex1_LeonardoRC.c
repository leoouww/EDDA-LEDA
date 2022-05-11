#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* 
	Lista Semana 2 - 
	LEONARDO RODRIGUES DE CASTRO
	PT3008479	
	
	1.  Como seriam, em linguagem C, as declarações de ponteiros para as seguintes estruturas de dados:

	uma variável do tipo int
	uma variável do tipo double
	uma variável do tipo char
	uma variável do tipo struct Hora { int hora; int minuto; int segundo; }
	uma variável do tipo double * (um ponteiro para double) 	.
	
*/



int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	//Declarando ponteiro para int
	int *ponteiro_int;
	//Declarando ponteiro para double 
	double *ponteiro_double;
	//Declarando ponteiro para char
	char *ponteiro_char;
	//Declarando ponteiro para struct do tipo int
	struct Hora *ponteiro_struct;
	//Declarando ponteiro para ponteiro do tipo dpuble
	double **ponteiro_pdouble;
	
	return 0;
}
