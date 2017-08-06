// Sabino

// Contém:
// Exemplos de Switch
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

/*Equivalentes ao VISUALG
	escolha <variavel>				switch <variavel>
	caso <valor>						case <valor>:
	fim de cada caso				break;
	outrocaso						default:
    começo, fimescolha				{ }
*/

// Início da função principal/main (código principal)
main() {

	// Declaração e inicialização de variáveis
	int num1 = 0;

	
	printf ("EXEMPLOS DE SWITCH !!! \n\n");
	
	// Entradas
	printf ("Digite um valor para escolher o caso: \n");
	printf (" -> 1 - Caso 1 \n -> 2 - Caso 2 \n -> 3 - Caso 3 \n -> 4 - Caso 4 \n"); // Menu
	printf (" -> ");
	scanf ("%d", &num1);
		
	printf ("\n -> Valor 1 (I) = %d", num1);
	printf ("\n\n");
	
	// Switch (escolhacaso)
	switch (num1)
		{
		case 1:
			printf (" - Voce escolheu o caso 1.");		
		break;
		case 2:
			printf (" - Voce escolheu o caso 2.");		
		break;
		case 3:
			printf (" - Voce escolheu o caso 3.");		
		break;
		case 4:
			printf (" - Voce escolheu o caso 4.");		
		break;
		default:
			printf (" - Default (Nenhum do menu).");	
		}
	// fim Switch
	
	printf ("\n\n");
	system ("pause"); // Encerra o programa
}
