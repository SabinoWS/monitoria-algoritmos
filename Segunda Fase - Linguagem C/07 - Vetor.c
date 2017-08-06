// Sabino

// Contém:
// Exemplos vetor (Array)

// CHAMADO DE BIBLIOTECAS
#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <conio.h>
//#include <dos.h>
//#include <windows.h>
//#include <time.h>
//#include <ctype.h>
//#include <locale.h>
//#include <math.h>

/*EQUIVALENTE AO VISUALG
		  ???
*/

// Início da função principal/main (código principal)
main() {

	printf ("EXEMPLO BASICO DE VETORES (ARRAY) !!! \n\n");
	
	// Usuario determinando tamanho do vetor
	// (não precisa, pode determinar direto. Ex: int tamanho = 10;)
	int tamanho = 0;
	printf ("----------------------------------------------- \n");
	printf ("Determinar tamanho do vetor: \n");
	printf ("----------------------------------------------- \n");
	printf (" - Digite o tamanho do vetor (numero inteiro): \n    -> ");
	scanf ("%d", &tamanho);
	// fim Usuario determinando tamanho do vetor
	
	// Declaração e inicialização de variáveis
	int contador = 0;
	int vetorInt[tamanho]; // Declaração de um vetor do tipo Inteiro com 5 posições
	//float vetorFloat[tamanho1]; // Declaração de um vetor do tipo Real com 5 posições
	//char vetorChar[tamanho1]; // Declaração de um vetor do tipo Caracter com 10 posições

	// Determinar valores dentro do vetor
	printf ("----------------------------------------------- \n");
	printf ("Leitura dos valores para preencher o vetor: \n");
	printf ("----------------------------------------------- \n");
	for (contador = 0; contador < tamanho; contador++) // Loop para correr todas posições do vetor
	{
		printf (" - Digite o valor para a posicao numero: %d \n   -> ", contador);
		scanf ("%d", &vetorInt[contador]);
	}
	// fim Determinar valores dentro do vetor
	
	// Ler valores dentro do vetor
	printf ("----------------------------------------------- \n");
	printf ("Exibicao dos valores que estao dentro do vetor: \n");
	printf ("----------------------------------------------- \n");
	for (contador = 0; contador < tamanho; contador++) // Loop para correr todas posições do vetor
	{
		printf (" - Posicao numero: %d \n   -> ", contador);
		printf ("%d \n", vetorInt[contador]);
	}
	// fim Ler valores dentro do vetor
	
	printf ("\n\n");
	system ("pause"); // Encerra o programa
}
