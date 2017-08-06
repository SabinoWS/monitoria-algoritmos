// Sabino

// Exemplo de mensagens

// CHAMADO DE BIBLIOTECAS -------Novo--------
#include <stdio.h>         // Comandos de entrada (teclado) e sa�da (mensagens)
//#include <string.h>	   // Comandos referentes ao processo de Strings
//#include <stdlib.h>
//#include <conio.h>	   // Comandos para manipula��o de fontes (cores etc)
//#include <dos.h>
//#include <windows.h>
//#include <time.h>        // Manipula��o de tempo
//#include <ctype.h>
#include <locale.h>        // Escolha de regi�o (Ex: Caracteres especiais "�")
//#include <math.h>        // Comandos matem�ticos
// Obs: Bibliotecas comentadas n�o est�o sendo utilizadas

/* EQUIVALENTES AO VISUALG 
	printf (); = escreva ()
	int = inteiro
	float = real
	char = caracter �nico
	char [] = sequ�ncia de caracteres Ex: mensagem[10] = Mensagem com 10 caracteres
	int main (...) { = In�cio
	} do main = Fim da fun��o
	Adendos:
 	Usa-se sinal = para atribui��o de valores em vari�veis
	Utilizar ; ap�s finalizar comandos
*/

// IN�CIO da fun��o principal/main (c�digo principal) -------Novo--------
main() { // int main(int argc, char *argv[])
	
	setlocale (LC_ALL,""); // Muda a localidade
	/* Obs:
		lc_all faz refer�ncia � todos os aspectos da localiza��o.
		"" vazia configura para localiza��o atual do sistema. */
	
	// Declara��o de vari�veis -------Novo--------
	int num1, num2; // Valores inteiro
	float dolar; // Valores reais	
	char letra1 = 'A'; // Caracter
	char mensagem1[] = "Hello World!"; // V�rios caracteres (String)
	// Obs: [] vazio para o compilador determinar o tamanho.
	
	// Inicia��o/Atribui��o das vari�veis (podem ser iniciadas na declara��o) -------Novo--------
	letra1 = 'A';
	dolar = 3.92;
	num1 = 10;
	// Obs: Recomenda-se sempre iniciar um valor na vari�vel antes de process�-la (pode conter lixo se vier vazia)
	
	// Mensagens -------Novo--------
	printf ("PROGRAMA COM EXEMPLOS B�SICOS DE MENSAGENS !!!\n"); // Mensagem direta
	printf ("\n String / char:    %s / %c", mensagem1, letra1); // Ex imprimir String (2 em 1 mensagem)
	printf ("\n N�mero real:      %2.2f", dolar); // Exemplo imprimir n real
	printf ("\n N�mero inteiro:   %d", num1); // Exemplo imprimir n inteiro
	printf ("\n Porcento:         %%"); // Exemplo para imprimir o simbolo %
	printf ("\n\n");
	// Obs: \n = Quebrar para pr�xima linha
	
	system ("pause"); // Encerra o programa (precisa para quando executado direto pelo .exe)
}
