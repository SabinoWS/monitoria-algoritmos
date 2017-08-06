// Sabino

// Cont�m:
// Exemplos de Loops (La�os de Repeti��es)

// CHAMADO DE BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
//#include <conio.h>
//#include <dos.h>
//#include <windows.h>
//#include <time.h>
//#include <ctype.h>
//#include <locale.h>
//#include <math.h>

/*EQUIVALENTE AO VISUALG
	enquanto                while
	repita                  do while
	for						para
*/

// In�cio da fun��o principal/main (c�digo principal)
main() {

	// Declara��o e inicializa��o de vari�veis
	int num1 = 0;
	int contador = 1;
	int acumulador = 0;
	int limite;

	printf ("EXEMPLOS BASICOS DE LA�OS !!! \n\n");

	// While (enquanto) -------------------------------------------------------
	printf ("LOOP WHILE: \n");
	printf (" - Digite quantas voltas o loop While dara (limite): \n  -> ");
	scanf ("%d", &limite);

	while(contador <= limite)
	{
		printf ("Volta numero: %d \n", contador);
		contador++;
	}
	// fim While -------------------------------------------------------
	
	// Resetar vari�veis de controle para o pr�ximo la�o
	contador = 0;
	limite = 0;
	
	// Do While (repita) -------------------------------------------------------
	printf ("\n LOOP DO WHILE: \n");
	do
	{
		printf (" - Digite um valor ou 0 para sair do Loop: \n  -> ");
		scanf ("%d", &num1);
		acumulador = acumulador + num1;
		contador++;
	}
	while (num1 != 0);
	printf ("Quantidade de entradas no Loop = %d", contador);
	// fim Do While -------------------------------------------------------
	
	// Resetar vari�veis de controle para o pr�ximo la�o
	contador = 0;
	limite = 0;
	contador = 0;
	
	// For (para) -------------------------------------------------------
	printf ("\n\n LOOP FOR: \n");
	printf (" - Digite o comeco do Loop: \n  -> ");
	scanf ("%d", &contador);
	printf (" - Digite o limite do Loop: \n  -> ");
	scanf ("%d", &limite);
	for (contador = contador; contador <= limite; contador++)
	{
		printf ("Volta numero: %d \n", contador);
	}
	
	// fim For -------------------------------------------------------
	
	
	printf ("\n\n");
	system ("pause"); // Encerra o programa
}
