// Sabino

// Contém:
// Exemplos de Struct

// CHAMADO DE BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
//#include <conio.h>
//#include <dos.h>
//#include <windows.h>
//#include <time.h>
//#include <ctype.h>
#include <locale.h>
//#include <math.h>

/*
Função:
3. Faça um programa de entrevista de emprego que pega
   o sexo, idade e formação escolar
   (1 para fundamental, 2 para médio e 3 para superior) e
   determina o cargo a que a pessoa pode se candidatar,
   de acordo com a tabela (pdf):
   Com qualquer outra opção deve-se imprimir
   "não há posição disponível".
   Ao final de cada entrevista deve-se perguntar se
   o usuário ainda deseja continuar,
   caso a resposta seja não o programa deve finalizar.
   (use enquanto..faca)
---------------------------------------------------------------------------------
*/

/*
struct candidato // Struct com elementos para cada pessoa cadastrada (formulário vazio)
{
	int sexo = 0;
	int idade = 0;
	int escolaridade = 0;
};
*/

typedef struct // Struct com elementos para cada pessoa cadastrada (formulário vazio)
{
	int sexo;
	int idade;
	int escolaridade;
} cadastro;

int main ()
{    	
	setlocale (LC_ALL,"");
	
	bool controle = true; // Variável de saída do Loop
	int contador = 0; // Contador de voltas do Loop (usando para pos do Struct 'n do candidato')
	int resposta = 0; // Guarda a resposta para pergunta de saída
	bool contNenhum = true; // Informa se não há vaga para o candidato atual
	
	int nVagas = 2; // Limite do Struct e do Loop mesmo sem resposta
	cadastro candidato[nVagas]; // Declaração da variável do tipo cadastro (Struct)
	
	
	printf ("EXEMPLO BÁSICO DE STRUCT: \n\n");
	printf ("NUMERO DE VAGAS = %d\n\n", nVagas+1); // Exibe tamanho do Struct
	while (controle == true)
	{
		contNenhum = true;
		printf ("---------CANDIDATO Nº %d---------- Contador = %d \n", contador+1, contador);
		
		// Entradas
		printf ("Sexo: 1-M / 2-F \n    -> ");
		scanf ("%d", &candidato[contador].sexo);
		printf ("Idade: \n    -> ");
		scanf ("%d", &candidato[contador].idade);
		printf ("fEscolar: \n    -> ");
		scanf ("%d", &candidato[contador].escolaridade);
		
		/*printf ("---------CANDIDATO Nº %d----------\n", contador+1);
		printf ("Sexo: \n    -> %d \n", candidato[contador].sexo);
		printf ("Idade: \n    -> %d \n", candidato[contador].idade);
		printf ("fEscolar: \n    -> %d \n", candidato[contador].escolaridade);*/

		// Determinando vagas -----------------------
		// Recepcionista
		printf ("Candidato %d pode ser candidatar às vagas: \n", contador+1);
		if ((candidato[contador].sexo == 2)
		&& (candidato[contador].idade < 25 )
		&& (candidato[contador].escolaridade == 2)) 
		{
			printf (" - RECEPCIONISTA \n");
			contNenhum = false;
		}
		
		// Servente
		if ((candidato[contador].sexo == 1)
		&& (candidato[contador].idade > 40)
		&& (candidato[contador].escolaridade == 1)) 
		{
			printf (" - SERVENTE \n");
			contNenhum = false;
		}
		
		// Auxiliar de RH
		if (((candidato[contador].sexo == 1 ) || (candidato[contador].sexo == 2 ))
		&& (candidato[contador].idade < 30 )
		&& (candidato[contador].escolaridade == 3)) 
		{
			printf (" - AUXILIAR DE RH \n");
			contNenhum = false;
		}
		
		if (contNenhum == true)
		{
			printf (" - Nenhuma vaga disponível! \n");
		}
		// fim Determinando vaga -----------------------
		
		// Controle de saída
		printf ("\nDeseja continuar? S-1/N-2 \n    -> ");
		scanf ("%d", &resposta);
		contador ++;
		if ((resposta == 1) && (contador <= nVagas))
		{
			printf ("\nContinuando...\n\n");
			controle = true;
		}
			else
			{
				if (contador > nVagas) printf ("\nACABARAM AS VAGAS!!!\n");
				printf ("\nFinalizando...\n\n");
				controle = false;
			}
				
		// fim Controle de saída
		
	}
	// fim Loop
	
	system ("pause");
}   
