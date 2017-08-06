// Sabino

// Contém:
// Exemplos string

// CHAMADO DE BIBLIOTECAS
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>
//#include <conio.h>
//#include <dos.h>
//#include <windows.h>
//#include <time.h>
//#include <ctype.h>
#include <locale.h>
//#include <math.h>

/*EQUIVALENTE AO VISUALG
		  ???
*/

// Início da função principal/main (código principal)
main() {

	printf ("EXEMPLO BASICO DE STRINGS !!! \n\n");
	
	setlocale(LC_ALL,"");
	
	char string1[100]; // [] = Tamanho da String + 1
	char string2[100];
	char string3[100];
	
	// Usuario determinando String
	printf ("----------------------------------------------- \n");
	printf ("Cadastrar Strings: \n");
	printf ("----------------------------------------------- \n");
	printf (" - Digite a String 1: \n    -> ");
	//fflush (stdin);
	gets (string1);
	//fgets (string1, 3, stdin);
	printf ("- Digite a String 2: \n    -> ");
	//fflush (stdin);
	gets (string2);
	//fgets (string2, 3, stdin);
	printf ("- Digite a String 3: \n    -> ");
	//fflush (stdin);
	gets (string3);
	//fgets (string3, 3, stdin);
	// fim Usuario determinando tamanho do vetor

	// Exibir String
	printf ("----------------------------------------------- \n");
	printf ("Mostrando Strings cadastradas: \n");
	printf ("----------------------------------------------- \n");
	printf (" - String 1: \n    -> %s", string1);
	printf ("\n - String 2: \n    -> %s", string2);
	printf ("\n - String 3: \n    -> %s", string3);
	// fim Exibir String
	
	// Comparando Strings
	printf ("\n----------------------------------------------- \n");
	printf ("Comparando String 1 e String 2: \n");
	printf ("----------------------------------------------- \n");
	if (!strcmp(string1,string2)) // strcmp = comparar strings
	{
		printf (" - String 1: %s \n - String 2: %s \n - São iguais ", string1, string2);
	}
		else
		{
			printf (" - String 1: %s \n - String 2: %s \n - NÃO são iguais ", string1, string2);	
		}
	// fim Comparando Strings
	
	// Copiando Strings
	printf ("\n----------------------------------------------- \n");
	printf ("Copiando String 1 e colando em String 3: \n");
	printf ("----------------------------------------------- \n");
	printf (" - String 1: \n    -> %s", string1);
	printf ("\n - String 3: \n    -> %s", string3);
	printf ("\n ... COPIANDO ...");
	strcpy (string3,string1); // Copia (1)destino de (2)origem
	printf ("\n - Agora String 3 equivale à: \n    -> %s", string3);
	// fim Copiando Strings
	
	// Concatenando String
	printf ("\n----------------------------------------------- \n");
	printf ("Juntando String 2 ao final de String 3: \n");
	printf ("----------------------------------------------- \n");
	printf (" - String 2: \n    -> %s", string2);
	printf ("\n - String 3: \n    -> %s", string3);
	printf ("\n .. JUNTANDO ...");
	strcat (string3, string2); // Concatena destino, string recebida
	printf ("\n - Agora String 3 equivale à: \n    -> %s", string3);
	// fim Concatenando Strings
	
	// Exibir Strings FINAIS e tamanhos
	printf ("\n----------------------------------------------- \n");
	printf ("Mostrando Strings FINAIS e tamanhos: \n");
	printf ("----------------------------------------------- \n");
	printf (" - String 1: \n    -> %s", string1);
	printf ("\n	- Tamanho: %d", strlen(string1));
	printf ("\n - String 2: \n    -> %s", string2);
	printf ("\n	- Tamanho: %d", strlen(string2));
	printf ("\n - String 3: \n    -> %s", string3);
	printf ("\n	- Tamanho: %d", strlen(string3));
	// fim Exibir Strings e tamanhos
	
	printf ("\n\n");
	//system ("pause"); // Encerra o programa
}
