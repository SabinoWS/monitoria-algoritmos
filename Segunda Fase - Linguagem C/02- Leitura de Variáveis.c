// Sabino

// Contém:
// Exemplo de leitura (scanf)

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
	scanf(); = leia() | Ex: scanf(“%d”,&valorInteiro)
	gets(); = leia() para Strings
	ou fgets para maior segurança | Ex: fgets (<nome da string>, <tamanho máximo + 1>, stdin)
*/

// Início da função principal/main (código principal)
main() {

	// Declaração e inicialização de variáveis (juntos)
	int valorInteiro = 0;
	float valorReal = 0;
	char mensagem1[100];
	
	// Scanf para INTEIRO -------Novo--------
	printf ("\n");
	printf ("GUARDAR VARIAVEL INTEIRA \n"); // Apresentação
	printf (" - Digite um valor inteiro: \n  ->  "); // Pedido para o usuário
	scanf ("%d", &valorInteiro); // Leitura da variável inteira 'valorInteiro'
	printf (" - Voce digitou: \n  ->  %d", valorInteiro); // Mostra o valor guardado em 'valorInteiro'
	
	// Scanf para REAL -------Novo--------
	printf ("\n\n");
	printf ("GUARDAR VARIAVEL REAL \n");
	printf (" - Digite um valor real: \n  ->  ");
	scanf ("%f", &valorReal);
	printf (" - Voce digitou: \n  ->  %2.2f", valorReal);
	/* Obs:
	 fflush(stdin); para limpar o buff do teclado *Windows
	 Próxima entrada de teclado pegaria o Enter pressionado e passaria direto.
	 __fpurge(stdin); *Linux
	 stdin = standard input (entrada padrão 'teclado') */
	
	// Scanf para String -------Novo--------
	printf ("\n\n");
	printf ("GUARDAR STRING \n");
	printf (" - Digite uma mensagem de 5 caracteres: \n  ->  ");
	fflush(stdin);
	//__fpurge(stdin);
	fgets (mensagem1,6, stdin);
	printf (" - Voce digitou: \n  ->  %s", mensagem1);
	/* Obs:
	 fgets para não dar erro com o tamanho da frase
	 fgets (<nome da string>, <tamanho máximo + 1>, stdin) */
	
	printf ("\n\n");
	system ("pause"); // Encerra o programa
}
