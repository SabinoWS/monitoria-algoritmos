// Sabino

// Contém:
// Exemplos matriz

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

	printf ("EXEMPLO BASICO DE MATRIZES !!! \n\n");
	
	// Usuario determinando tamanho da matriz (Não precisa, pode determinar na declaração)
	int tamanhoL = 0;
	int tamanhoC = 0;
	printf ("----------------------------------------------- \n");
	printf ("Determinar tamanho da matriz: \n");
	printf ("----------------------------------------------- \n");
	printf (" - Digite a quantidade de linhas da matriz (numero inteiro): \n    -> ");
	scanf ("%d", &tamanhoL);
	printf (" - Digite a quantidade de linhas da matriz (numero inteiro): \n    -> ");
	scanf ("%d", &tamanhoC);
	// fim Usuario determinando tamanho do vetor
	
	// Declaração e inicialização de variáveis
	int contadorL = 0;
	int contadorC = 0;
	int matrizInt[tamanhoL][tamanhoC]; // Matriz do tipo Inteiro e seu tamanho [linhas][Colunas]
	//float matrizFloat[tamanhoL][tamanhoC];
	//char matrizChar[tamanhoL][tamanhoC];

	// Determinar valores dentro do vetor
	printf ("----------------------------------------------- \n");
	printf ("Leitura dos valores para preencher o vetor: \n");
	printf ("----------------------------------------------- \n");
	
	for (contadorL = 0; contadorL < tamanhoL; contadorL++) // Loop para correr as LINHAS
	{
		for (contadorC = 0; contadorC < tamanhoC; contadorC++) // Loop para correr as COLUNAS
		{
			printf (" - Digite o valor para a posicao [%d][%d]: \n    -> ", contadorL, contadorC);
			scanf ("%d", &matrizInt[contadorL][contadorC]);	
		}	
	}
	// fim Determinar valores dentro do vetor
	
	// Resetar contadores
	contadorL = 0;
	contadorC = 0;
	
	// Ler valores dentro do vetor
	printf ("----------------------------------------------- \n");
	printf ("Exibicao dos valores que estao dentro do vetor: \n");
	printf ("----------------------------------------------- \n");
	
	for (contadorL = 0; contadorL < tamanhoL; contadorL++) // Loop para correr as LINHAS
	{
		printf (" Linha %d ->   ", contadorL);
		for (contadorC = 0; contadorC < tamanhoC; contadorC++) // Loop para correr as COLUNAS
		{
			printf ("[%5d   ]", matrizInt[contadorL][contadorC]);
		}
		printf ("\n");		
	}
	// fim Ler valores dentro do vetor
	
	printf ("\n Tamanho da matriz: \n - [%d][%d]", tamanhoL, tamanhoC);
	printf ("\n - %d Linha(S) e %d Coluna(S)", tamanhoL, tamanhoC);
	printf ("\n Quantidade de valores: \n - [%d]", tamanhoL * tamanhoC);
	
	printf ("\n\n");
	system ("pause"); // Encerra o programa
}
